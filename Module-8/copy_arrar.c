#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        /* code */
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    int arrb[m];
    for (int i = 0; i <m; i++)
    {
        /* code */
        scanf("%d",&arrb[i]);
    }

      int ans[n+m];
          for (int i = 0; i < n; i++)
    {
        /* code */
        ans[i]=arr[i];
    }
    int i=n;
    for (int j = 0; j < m; j++)
    {
        /* code */
        ans[i]=arrb[j];
        i++;
    }


    for (int i = 0; i < n+m; i++)
    {
        /* code */
        printf("%d ",ans[i]);
    }
    
    
    
    return 0;
}