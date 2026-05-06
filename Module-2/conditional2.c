#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 5000){
        printf("I will buy a laptop\n");
        if(tk >= 8000){
            printf("I will buy a mobile\n");
        }else{
            printf("I will buy a watch\n");
        }
    }else{
        printf("i am poor\n");
    }
    
    return 0;
}