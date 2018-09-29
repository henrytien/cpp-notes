//Example 2
#include<iostream>
class Myclass
{
public:
	Myclass(int a, int b, int c);
	static void GetSum(); // 声明静态成员函数
private:
	int a, b, c;
	static int Sum;//声明静态数据成员
};

int Myclass::Sum = 0;//定义并初始化静态数据成员

Myclass::Myclass(int a, int b, int c)
{
	this->a = a;
	this->b = b;
	this->c = c;
	Sum += a + b + c; //非静态成员函数可以访问静态数据成员
}

void Myclass::GetSum() //静态成员函数的实现
{
	//std::cout<<a<< std::endl; //错误代码，a是非静态数据成员
	std::cout << "Sum=" << Sum << std::endl;
}

int main()
{
	Myclass M(1, 2, 3);
	M.GetSum();

	Myclass N(4, 5, 6);
	N.GetSum();

	Myclass::GetSum();
	return 0;
}
