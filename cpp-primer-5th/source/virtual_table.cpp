#include <iostream>
using namespace std;
class Base {

private:
	virtual void f() { cout << "Base::f" << endl; }
	virtual void g() { cout << "Base::g" << endl; }
	virtual void h() { cout << "Base::h" << endl; }
};

typedef void(*Fun)(void);

class Derive : public Base{
public:
   virtual void f1() { cout << "Derive::f1" << endl; }
   virtual void g1() { cout << "Derive::g1" << endl; }
   virtual void h1() { cout << "Derive::h1" << endl; }
   virtual void f() { cout << "Derive::f" << endl; }
   virtual void g() { cout << "Derive::g" << endl; }
   virtual void h() { cout << "Derive::h" << endl; }
};

int main()
{
	//Base b;
	Fun pFun = NULL;
    /*
	cout << "虚函数表地址：" << (int*)(&b) << endl;

	cout << "虚函数表 — 第一个函数地址：" << (int*)*(int*)(&b) << endl;

	// Invoke the first virtual function
	pFun = (Fun)*((int*)*(int*)(&b));
	pFun();

    (Fun)*((int*)*(int*)(&b)+0);  // Base::f()
    pFun();

    pFun =  (Fun)*((int*)*(int*)(&b)+1);  // Base::g()
    pFun();

    pFun =  (Fun)*((int*)*(int*)(&b)+2);  // Base::h()
    pFun();
    */
    /*
    Derive d;

    pFun = (Fun)*((int*)*(int*)(&d)+0);  // Derive::f1()  //在没有覆盖的情况下只会访问到base f
    pFun();

    pFun =  (Fun)*((int*)*(int*)(&d)+1);  // Derive::g1() //在没有覆盖的情况下只会访问到base f
    pFun();

    pFun =  (Fun)*((int*)*(int*)(&d)+2);  // Derive::h1() //在没有覆盖的情况下只会访问到base f
    pFun();
    */

    Base *b = new Derive();
    //  b->f1();   // 未覆盖父类的成员函数的行为都会被编译器视为非法
    //b->f();  // Derive::f() 通过父类的指针访问子类的成员函数

    Derive d;
    pFun = (Fun)*((int*)*(int*)(&d)+0);   //如果父类虚函数是private，依然可以访问
    pFun();
	return 0;
}
