#include <stdio.h>
int prime(int n);
int prime(int n)
{
    int p;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= n; j++)
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
    return p;
}

int main()
{
    int n, A;
    printf("Enter number.\n");
    scanf("%d", &n);

    for (int i = n + 1; i > 0; i++)
    {
        A = prime(i);

        if (A == 1)
        {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}