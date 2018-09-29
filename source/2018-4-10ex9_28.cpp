#include<iostream>
#include<forward_list>
#include<string>

void find_and_insert(std::forward_list<std::string> &flist, std::string const &to_find, std::string const &to_add)
{
    auto prev = flist.before_begin();
    for(auto curr = flist.begin(); curr != flist.end(); prev = curr++)
    {
        if(*curr == to_find)
        {
            flist.insert_after(curr,to_add);
            return;
        }
    }
    flist.insert_after(prev,to_add);
}

int main()
{
    std::forward_list<std::string> flist={"hello","world","how","are","you"};
    for(auto l:flist)
        std::cout << l << " ";
    std::string a("hello");
    std::string b("bye");
    find_and_insert(flist,a,b);
    std::cout << std::endl << "find_and_insert " << a <<" after" << std::endl;
    for(auto l:flist)
        std::cout << l <<" ";
    return 0;
}
