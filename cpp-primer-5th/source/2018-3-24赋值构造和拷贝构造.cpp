#include<iostream>
using namespace std;

class Person
{
public:
    Person(){}
    Person(const Person &p)
    {
        cout << "Copy Constructor" << endl;
    }

    Person &operator=(const Person &p)
    {
        cout << "Assign" << endl;
        return *this;
    }

private:
    int age;
    string name;
};

void f(Person p)
{
    return;
}

Person f1()
{
    Person p;
    return p;
}

int main()
{
    Person p;
    Person p1 = p;  //1
    Person p2;
    p2 = p;         // 2
    f(p2);          // 3
    p2 = f1();      // 4
    Person p3 = f1();// 5
    return 0;
}
