#include<iostream>
#include<cstdio>
#include<memory>
#include<string.h>
#include<vector>
using namespace std;

void solve(char *str , int len)
{
    int i , hash[256];
    memset(hash , 0 , sizeof(hash));

    for(i = 0 ; i < len ; ++i)
    {
        if(0 == hash[str[i]])
            hash[str[i]] = 1;
    }
    for(i = 0 ; i < 256 ; ++i)
    {
        if(0 != hash[i])
            putchar(i);
    }
    printf("\n");
}

int main(void)
{
    int len;
    char str[1000];

    while(scanf("%s" , str) != EOF)
    {
        len = strlen(str);
        solve(str , len);
    }
    return 0;
}
