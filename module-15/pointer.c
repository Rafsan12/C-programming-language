#include <stdio.h>

int main()
{
    int x = 100;
    int * prt = &x;
    printf("%d\n",x);
    printf("%p",&x);
    return 0;
}