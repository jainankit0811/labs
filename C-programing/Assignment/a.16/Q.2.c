#include <stdio.h>

int main()
{
    int n, i, s = 0;
    printf("Enter number.\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = s + (i * 2);
    }
    printf("%d\n", s);
    return 0;
}