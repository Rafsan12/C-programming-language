#include <stdio.h>


void fun(int x)
{
    x=20;
printf("fun ar x -> %p\n",&x);
}
int main()
{
    int x=10;
    printf("main ar x -> %p\n",&x);
    printf("main ar  x value -> %d\n",x);
    fun(x);
    return 0;
}