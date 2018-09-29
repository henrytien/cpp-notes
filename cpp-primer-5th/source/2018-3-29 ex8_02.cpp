#include<iostream>
using namespace std;

istream &func(istream &is)
{
    std::string buf;
    while(is >> buf)
        std::cout << buf << std::endl;
    is.clear();
    return is;
}

int main()
{
    istream &is = func(cin);
    cout << is.rdstate() << endl;
    return 0;
}
