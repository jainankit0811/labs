#include <stdio.h>

int main()
{
    int n, s, p, i;
    printf("Enter number.");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        s = n % 10;
        n = n / 10;
    }
    printf("%d\n", i);

    return 0;
}