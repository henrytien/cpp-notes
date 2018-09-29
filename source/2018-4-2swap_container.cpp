#include<iostream>
#include<vector>
#include<list>
#include<string>
using namespace std;
int main()
{
    std::list<const char *> clist{"a","b","c","d","f"};
    std::vector<std::string> vec;
    vec.assign(clist.cbegin(),clist.cend());

    for(auto ptr:vec) cout << ptr << " " << endl;
    return 0;
}
