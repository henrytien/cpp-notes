#include<iostream>
#include<vector>
using namespace std;

int main()
{
    cout<<"input increase number: ";
    vector<int> iVec(0);
    int iNum = 0;
    while(cin>>iNum && iVec.size()<6)
        iVec.push_back(iNum);
    auto low = iVec.begin(), high = iVec.end();
    auto mid = iVec.begin() + (high -low)/2;

    int sought = 0;
    cout<<"input you want find number: ";
    cin>>sought;
    while(mid != high && *mid != sought )
    {
        if(sought < *mid)
            high = mid;   //ºöÂÔºó°ë²¿·Ö
        else
            low = mid + 1;
        mid = low + (high - low)/2;
    }
    if(*mid == sought)
    {
        cout<<*mid<<endl;
    }else{
         cout<<"don't find"<<endl;
    }
       return 0;
}
