#include <stdio.h>
int prime(int n);
int prime(int n)
{
    int p = 1;

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
                }
            }
        }
    }
    return p;
}

int main()
{
    int n, a, s = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number - ");
        scanf("%d", &n);

        a = prime(n);

        if (a == 1)
        {
            continue;
        }

        s = s + n;
    }
    printf("Sum is %d", s);
    return 0;
}