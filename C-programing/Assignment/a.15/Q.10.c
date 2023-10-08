#include <stdio.h>

int main()
{
    int n, s;
    printf("Enter number.");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j > 1; j++)
        {
            s = n / j;
        }
        printf("%d\n", s);
    }
    return 0;
}