#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s", a);
    scanf("%s", b);
    int result = strcmp(a, b);
    if (result < 0)
        printf("%s",a);
    else if (result > 0)
        printf("%s",b);
    else
        printf("%s",a);
    return 0;
}