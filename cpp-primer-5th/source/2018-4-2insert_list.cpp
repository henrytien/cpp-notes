#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<deque>
using std::cin; using std::cout; using std::endl; using std::vector; using std::string; using std::deque;
int main()
{
    deque<string> d;
    auto iter = d.begin();
    std::string number = 0;
    while(cin >>  number && number != "0")
        iter = d.insert(iter,number);

    for(auto ptr:d) cout << ptr << " ";

    return 0;
}
