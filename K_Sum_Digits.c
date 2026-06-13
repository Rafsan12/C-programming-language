#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[1000001];
    scanf("%s", str);
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += str[i] - '0';

    }
    printf("%lld", sum);
    
    return 0;
}