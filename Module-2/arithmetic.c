#include<stdio.h>
int main()
{
    int a=3,b=20;
    float c = b*1.0/a;
    printf("The sum of a and b is %d\n",a+b);
    printf("The difference of a and b is %d\n",a-b);
    printf("The product of a and b is %d\n",a*b);
    printf("The quotient of a and b is %f\n",c);
    printf("The remainder of a and b is %d\n",b%a);
    
    return 0;

}