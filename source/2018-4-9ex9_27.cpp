#include<iostream>
#include<forward_list>

auto remove_odd(std::forward_list<int> &flst)
{
    auto is_odd =[] (int i) {return i & 0x1;};
    flst.remove_if(is_odd);
}

int main()
{
    std::forward_list<int> data = {0,1,2,3,4,5,6,7,8,9};
    remove_odd(data);
    for(auto i:data)
        std::cout << i <<" ";
    return 0;
}
