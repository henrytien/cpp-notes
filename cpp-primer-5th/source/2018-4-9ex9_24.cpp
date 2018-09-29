#include<iostream>
#include<vector>
#include<list>

int main()
{
//    std::vector<int> v;
    //v.push_back(1);
    //std::cout << v.at(0);
    //std::cout << v[0];
    //std::cout << v.front();
  //  std::cout << *v.begin();

    std::list<int> ilst={0,1,5,8,6,9,4,2};
    std::cout <<"delete odd before:" << std::endl;
     for(auto i:ilst)
         std::cout << i << " ";
    auto it = ilst.begin();
    while(it!=ilst.end())
        if(*it%2)
            it = ilst.erase(it);
        else
            ++it;
    std::cout << std::endl << "delete odd after:" << std::endl;
    for(auto i:ilst)
         std::cout << i << " ";

    std::cout << std::endl << "delete all:" << std::endl;
    ilst.erase(ilst.begin(),ilst.end());
    for(auto i:ilst)
        std::cout << i <<" ";

    return 0;
}
