#include <stdio.h>

int main()
{
    int n, i, p;
    printf("Enter number.\n");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        for (int j = 2; j <= i; j++)
        {

            if (n % j == 0)
            {
                if (n == j)
                {
                    p = 1;
                    break;
                }
                else
                {
                    p = 0;
                    break;
                }
            }
        }
    }
    if (p == 1)
    {
        printf("It is a prime number.");
    }
    else if (p == 0)
    {
        printf("It is a not a prime number.");
    }
    return 0;
}