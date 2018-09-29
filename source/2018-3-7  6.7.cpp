/*
练习6.54
编写函数的声明，令其接受两个int形参并返回类型也是int；然后声明一个vector对象，令其元素是指向该函数的指针。
int func(int a,int b);
typedef int (*pf)(int,int);
std::vector<pf> v;

int func(int,int);
using pFunc = decltype(func) *;
std::vector<pFunc> v1;

*/

#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;

inline int f(const int,const int);
typedef decltype(f) fp;

inline int numAdd(const int n1,const int n2) {return n1+n2;}
inline int numSub(const int n1,const int n2) {return n1-n2;}
inline int numMul(const int n1,const int n2) {return n1*n2;}
inline int numDiv(const int n1,const int n2) {return n1/n2;}

vector<fp*> v{numAdd,numSub,numMul,numDiv};

int main()
{
    //
    // @brief Exercise 6.56
    // @note Call each element in the vector and print their result.
    //
    for(auto it = v.cbegin();it != v.cend();++it)
        cout <<(*it)(2,2)<<std::endl;

}
