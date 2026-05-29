#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i]; // Add each element to the sum
    }
    printf("%d\n", sum); // Print the sum
    return 0;
}