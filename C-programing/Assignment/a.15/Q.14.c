#include <stdio.h>

int main()
{
    int n;
    printf("enter number.");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j >= i; j++)
        {

            if (i % j == 0)
            {
                if (i / j == 0 || i == j)
                {
                    printf("%d", j);
                }
            }
        }
    }
    return 0;
}