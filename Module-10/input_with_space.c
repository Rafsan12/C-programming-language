#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    // scanf("%s", s);
    // gets(s);
    fgets(s, 10, stdin);
    printf("%s\n", s);
    return 0;
}