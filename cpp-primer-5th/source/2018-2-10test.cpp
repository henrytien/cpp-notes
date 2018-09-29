#include<iostream>
using namespace std;

int &get(int *arr,int index)
{
    return arr[index];
}

int main()
{
    int a[10];
    for(int i =0;i != 10; ++i)
        get(a,i) = i;
    cout<<a[2];
    return 0;
}

