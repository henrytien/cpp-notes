#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    unsigned cnt = 42;

    char bad[cnt];

    memset(bad,0,sizeof(bad));
    char a[]= ("hello");
    char b[] = "helloworld";
    strcpy(bad,b);

    cout<<bad<<endl;


    return 0;
}
