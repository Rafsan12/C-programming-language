#include <stdio.h>

int main()
{
    int a;
    while (scanf("%d\n",&a) != EOF)
    {
        /* code */
        int pass = 1999;
        if(a == pass)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    
    return 0;
}