#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> v2;  // ¿Õvector
    for(int32_t i = 0; i < 100; i++)
        v2.push_back(i);

    for(auto iter = v2.begin();iter!=v2.end();++iter)
        cout<<*iter<<" ";
        cout<<endl;
/*
    string word;
    vector<string> text; // ¿Õvector¶ÔÏó
    while(cin>>word)
        text.push_back(word);

    for(auto iter1 = text.begin(); iter1!=text.end();++iter1)
    {
        cout<<*iter1<<" ";
    }
*/
    vector<int> vNum;
    int32_t iNum = 0;
    cout<<"number: ";
    while(cin>>iNum)
        vNum.push_back(iNum);

    for(auto &iResult : vNum)
        iResult *= iResult;

    for(auto i:vNum)
        cout<<i<<" ";

    return 0;
}
