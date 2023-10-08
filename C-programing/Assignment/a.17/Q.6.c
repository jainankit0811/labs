#include <stdio.h>
int prime(int n);
int prime(int n)
{
    int p = 1;

    for (int i = 2; i <= n; i++)
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
    return p;
}

int main()
{
    int n, s = 0, a;
    for (int i = 1; i <= 10; i++)
    {

        printf("Enter number - ");
        scanf("%d", &n);

        if (n == 1)
        {
            s = s + n;
        }

        a = prime(n);
        if (a == 1)
        {
            continue;
        }
        else
        {

            s = s + n;
        }
    }
    printf("%d", s);

    return 0;
}