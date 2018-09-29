#include <stdio.h>
#include <stdlib.h>
int add(int x, int y)
{
    return x + y;
}
int main()
{
    auto sum = add(5,6); // explicitly specify that foo should have automatic duration
    printf("%d",sum);
    return 0;
}
