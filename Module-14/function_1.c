#include <stdio.h>

int sum(int x,int y)
{
    int sum = x+y;
    return sum;
}

int main()
{
    int s=sum(10,30);
    printf("%d\n",s);
    printf("%d\n", sum(90,10));
    return 0;
}