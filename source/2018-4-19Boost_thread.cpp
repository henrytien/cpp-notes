#include <boost/thread/thread.hpp> //包含boost头文件
#include <iostream>
#include <cstdlib>
using namespace std;

volatile bool isRunning = true;

void func1()
{
    static int cnt1 = 0;
    while(isRunning)
    {
        cout << "func1:" << cnt1++ <<endl;
        sleep(1);
    }
}

void func2()
{
    static int cnt2 = 0;
    while(isRunning)
    {
        cout << "\tfunc2:" << cnt2++ <<endl;
        sleep(2);
    }
}

int main()
{
    boost::thread thread1(&func1);
    boost::thread thread2(&func2);

    system("read");
    isRunning = false;

    thread2.join();
    thread1.join();
    cout << "exit" << endl;
    return 0;
}
