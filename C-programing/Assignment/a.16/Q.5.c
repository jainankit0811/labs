#include <stdio.h>

int main()
{
    int n, i, s;
    printf("Enter number.\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s = s + (i * i * i);
    }
    printf("%d\n", s);
    return 0;
}