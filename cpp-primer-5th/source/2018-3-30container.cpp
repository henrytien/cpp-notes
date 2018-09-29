#include<iostream>
#include<vector>
auto contain(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last, int value)
{
    for(;first != last;++first)
        if(*first == value) return first;
        return last;
}

int main()
{
    std::vector<int> vec;
    int i=0,j=0;
    std::cout <<"please input some numbers, input 0 stop" <<std::endl;
    while(std::cin >> i && i != 0)
        vec.push_back(i);
    std::cout << "please input you want search of number: ";
    std::cin >> j;
    std::cout << *contain(vec.begin(),vec.end(),j) << std::endl;
    return 0;
}
