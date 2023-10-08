#include <stdio.h>

int main()
{
    int n, r = 0;

    printf("Enter number.");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int s = 1;
        for (int j = 1; j <= i; j++)
        {
            s = s * j;
        }
        r = r + s / i;
    }

    printf("%d\n", r);

    return 0;
}