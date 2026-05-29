#include<stdio.h>

int main(){
    int a[5]  = {1, 2, 3, 4, 5}; // Array initialization with values
    int b[5]  = {0}; // Array initialization with zero (all elements will be set to 0)
    for(int i = 0; i < 5; i++){
        printf("a[%d] = %d, b[%d] = %d\n", i, a[i], i, b[i]);
    }
    return 0;
}