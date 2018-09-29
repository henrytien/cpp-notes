#include<iostream>



int main()
{

    int a = 3, b = 4;
    int i = 42, *p = &i, &r = i;


    decltype(a) c = a;
    decltype((b)) d = a;
    decltype(a = b) f = a;
    decltype((i)) e = i;
    decltype(r+1) g = 45;
    decltype(*p)  z = a;

    std::cout<<"c="<<c<<std::endl;
    std::cout<<"d="<<d<<std::endl;
    std::cout<<"f="<<f<<std::endl;
    std::cout<<"e="<<e<<std::endl;
    std::cout<<"g="<<g<<std::endl;
    std::cout<<"z="<<z<<std::endl;

    ++c;
    ++d;

    std::cout<<"c="<<c<<std::endl;
    std::cout<<"d="<<d<<std::endl;
    return 0;
}
