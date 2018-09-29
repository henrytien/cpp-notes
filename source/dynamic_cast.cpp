
#include<iostream>
using namespace std;

class Base{
public:
    Base() {}
    ~Base() {}
    void print() {
        std::cout << "I'm Base" << endl;
    }

    virtual void i_am_virtual_foo() {cout << "base foo()" <<endl;}
};

class Sub: public Base{
public:
    Sub() {}
    ~Sub() {}
    void print() {
        std::cout << "I'm Sub" << endl;
    }

    virtual void i_am_virtual_foo() { cout << "sub foo()" <<endl;}
};
int main() {
    cout << "Sub->Base" << endl;
    Sub * sub = new Sub();
    sub->print();

    Base *sub2base  = dynamic_cast<Base*>(sub);
    if(sub2base != nullptr)
    {
        sub2base->print();
    }
   cout << "<sub->base> sub2base val is: " << sub2base << endl;



    cout << endl << "Base->Sub" << endl;
    Base *base = new Base();
    base->print();


    Sub  *base2sub = dynamic_cast<Sub*>(base);
    if (base2sub != nullptr) {
        base2sub->print();
    }
    cout <<"<base->sub> base2sub val is: "<< base2sub << endl;

    delete sub;
    delete base;
    return 0;

}
