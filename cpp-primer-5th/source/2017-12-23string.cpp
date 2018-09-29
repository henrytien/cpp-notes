#include<iostream>

int main()
{
    /*
    std::string str("some string");
    //每行输出 str中的一个字符
    for(auto c : str)
        std::cout<<c<<std::endl;
    */

    /*
    std::string s("Hello World!!!");
    // punct_cnt 的类型和s.size的返回类型一样
    decltype(s.size()) punct_cnt = 0;
    for(auto c:s)
        if(ispunct(c))
            ++punct_cnt;
        std::cout<<punct_cnt
            <<" punctuation characters in "<< s <<std::endl;

      */

      std::string s("some string");
      for(decltype(s.size()) index = 0;
        index != s.size() && !isspace(s[index]);++index)
            s[index] = toupper(s[index]);
        std::cout<<s<<std::endl;

      std::string s1("hello !!!");
      //转换为大写形式
      for(auto &c:s1)      //对于s中的每个字符(注意:c是引用)
        c = toupper(c);     //c是一个引用,因此赋值语句将改变s中字符的值
      std::cout<<s1<<std::endl;
    return 0;
}
