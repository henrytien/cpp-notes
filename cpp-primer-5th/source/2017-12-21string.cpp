#include<iostream>
#include<string>
using std::string;
int main()
{
    string line;
    while(getline(std::cin,line))
        //if(!line.empty())
        if(line.size()>80)
            std::cout<<line<<std::endl;
    return 0;
}
