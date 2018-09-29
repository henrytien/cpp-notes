#include<iostream>
using namespace std;
class base {
  public:
    base()
    { cout<<"Constructing base \n"; }

     //virtual ~base()
    ~base()
    { cout<<"Destructing base \n"; }
};

class derived: public base {
  public:
    derived()
    { cout<<"Constructing derived \n"; }
    ~derived()
    { cout<<"Destructing derived \n"; }
};

int main(void)
{
  derived *d = new derived();
  base *b = d;
  delete b;
  return 0;
}

/*
delete时只根据指针类型调用了基类的析构函数。 正确的操作是，基类和继承类的析构函数都应该被调用，解决方法是将基类的析构函数声明为虚函数
*/
