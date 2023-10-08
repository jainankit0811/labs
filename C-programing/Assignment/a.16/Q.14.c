#include <stdio.h>

int prime(int n);
int prime(int n)
{
    int p;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (n % j == 0)
            {
                if (n == i)
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
    return p;
}

int main()
{
    int n, a, b, A;

    printf("Enter number.");
    scanf("%d", &a);
    printf("Enter next number.");
    scanf("%d", &b);

    for (int i = 2; i > 0; i++)
    {
        n = i;

        A = prime(n);
        if (A == 1)
        {
            if (a % n == 0 && b % n == 0)
            {
                printf("It is not a coprime number.");
                break;
            }
            else
            {
                printf("It is coprime number.");
                break;
            }
        }
    }

    return 0;
}