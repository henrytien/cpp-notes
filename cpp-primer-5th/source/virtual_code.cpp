#include <iostream>
using namespace std;

struct A {
	A() {
		local_var++;
	}
	virtual void func() {
		cout << "A" << endl;
	}
	static int local_var;
};

int A::local_var = 0;

struct B : A {
	B() {
		local_var += 2;
	}
	virtual void func() {
		cout << "B" << endl;
	}
};

int main() {
	A* a1 = new B[3];
	cout << a1[0].local_var << endl;
	a1->func();
	A a2 = a1[0];
	cout << a2.local_var << endl;
	a2.func();
	A a3;
	a3 = a1[0];
	cout << a3.local_var << endl;
	a3.func();
}
