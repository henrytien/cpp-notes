#include<iostream>
#include<system_error>
using namespace std;

void error_msg(initializer_list<string> il)
{
    for(auto beg = il.begin(); beg != il.end(); ++beg)
        cout<< *beg<< " ";
        cout << endl;
}

void error_msg(std::error_code e, initializer_list<string> il)
{
    cout<< e.message() <<": ";
    for(const auto &elem : il)
        cout << elem << " ";
    cout << endl;

}


int main()
{
    string m_szA = "hello";
    string m_szB = "world";
    std::error_code iErrorCode ;
    if(m_szA!= m_szB)
    {
       error_msg({"main",m_szA,m_szB});
    }
    if(m_szA!= m_szB)
    {
       error_msg(iErrorCode,{"main",m_szA,m_szB});
    }

    return 0;
}
