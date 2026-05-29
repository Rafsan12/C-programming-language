#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n); // Read the size of the array
    int arr[n]; // Declare an array of size n
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]); // Read elements into the array
    }
    // Reverse the array
    for(int i = n - 1; i >= 0; i--){
        printf("%d ", arr[i]); // Print elements in reverse order
    }

    return 0;
}