#include <iostream>
#include <time.h>
using namespace std;
int main(void)
{
    time_t nowtime;
    nowtime = 1517556955; //获取日历时间
    cout << nowtime << endl;  //输出nowtime
    struct tm *local;

    local=localtime(&nowtime);  //获取当前系统时间

    char buf[80];
    strftime(buf,sizeof(buf),"格式化输出:%Y-%m-%d %H:%M:%S",local);
    cout << buf << endl;
    return 0;
}
