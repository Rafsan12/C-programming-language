#include <stdio.h>


void fun(int x)
{
printf("fun ar x -> %p\n",&x);
}
int main()
{
    int x=10;
    printf("main ar x -> %p\n",&x);
    fun(x);
    return 0;
}