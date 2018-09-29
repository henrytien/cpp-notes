#include <boost/asio.hpp>
#include <boost/thread.hpp>
#include <boost/bind.hpp>
#include <cstdlib>
#include <iostream>

using namespace boost::asio;
io_service service;
struct connection: boost::enable_shared_from_this<connection> {
    typedef boost::system::error_code error_code;
    typedef boost::shared_ptr<connection> ptr;
    connection():sock_(service),started_(true){}
    void start(ip::tcp::endpoint ep){
        sock_.async_connect(ep,boost::bind(&connection::on_connect,shared_from_this(),_1));
    }
    void stop(){
	if(!started()) return;
	started_ = false;
	sock_.close();
    } 
    bool started(){return started_;}
private:
    void on_connect(const error_code &err){
        // 这里决定用这个链接做什么
        if(!err) do_read();
        else stop();
    }

    void on_read(const error_code & err, size_t bytes){
        if(!started()) return;
        std::string msg(read_buffer_,bytes);
        if(msg=="can_login") do_write("access_data");
        else if(msg.find("data ") == 0) process_data(msg);
        else if(msg == "login_fail") stop();
    }
    
    void on_write(const error_code &err, size_t bytes)
    {
        do_read();
    }
    
    void do_read(){
        sock_.async_read_some(buffer(read_buffer_),boost::bind(&connection::on_read,shared_from_this(),_1,_2));
    }
    
    void do_write(const std::string &msg){
        if(!started()) return;
        // 注意：因为在做另外一个async_read操作之前你想要发送多个消息
        // 所以你需要多个写入buffer
        std::copy(msg.begin(),msg.end(),write_buffer_);
        sock_.async_write_some(buffer(write_buffer_,msg.size()),boost::bind(&connection::on_write,shared_from_this(),_1,_2));
    }
    
    void process_data(const std::string &msg)
    {
        // 处理服务端的内容,然后启动另外一个写入操作
    }
private:
    ip::tcp::socket sock_;
    enum {max_msg = 1024};
    char read_buffer_[max_msg];
    char write_buffer_[max_msg];
    bool started_;
};

int main(int argc,char* argv[])
{
    ip::tcp::endpoint ep(ip::address::from_string("127.0.0.1"),8001);
    connection::ptr(new connection)->start(ep);
}
