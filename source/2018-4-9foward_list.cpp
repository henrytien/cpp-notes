#include<iostream>
#include<forward_list>
int main()
{
    std::forward_list<int> flst={0,4,3,2,5,8,9,7,6};
    std::cout<< "Delete before:"<<std::endl;
    for(auto l:flst)
        std::cout << l << " ";
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while(curr != flst.end())
    {
        if(*curr % 2)
            curr = flst.erase_after(prev);  // 删除并移动curr
        else
        {
            prev = curr;  //移动curr,指向下一个元素，prev指向curr之前的元素
            ++curr;
        }
    }

    std::cout << std::endl << "Delete after:" << std::endl;
    for(auto l:flst)
        std::cout << l <<" ";
    return 0;
}
