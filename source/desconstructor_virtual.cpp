
#include <iostream>
using namespace std;

class A{
public:
    virtual void show(){
        cout<<"in A"<<endl;
    }
    virtual ~A(){show();}
};

class B:public A{
public:
    void show(){
        cout<<"in B"<<endl;
    }
};

int main(){
    A a;
    B b;
}
