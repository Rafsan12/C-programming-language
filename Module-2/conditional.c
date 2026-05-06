#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk==100)
    {
        printf("I will buy a shirt\n");
    }
    else if(tk>100)
    {
        printf("I will buy a pant\n");
    }
    else
    {
        printf("I will buy a shoe\n");
    }
}