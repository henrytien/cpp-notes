#include<iostream>

using namespace std;
class Date
{
    friend void FunTest();
public:
//非委托构造函数使用对应的实参初始化成员
Date(int year,int month,int day):_year(year), _month(month), _day(day){}

//其余构造函数全都委托给另一个构造函数
Date(int year) :Date(1990,1,1){}
Date(int year,int m) :Date(2,0,1){}
//Date(int year) :Date(){}

private:
    int _year;
    int _month;
    int _day;
};

void FunTest()
{
    Date(2016);
    Date d = Date(2016,2);
    cout <<d._year<<endl;
}

int main()
{
    FunTest();
    return 0;
}
