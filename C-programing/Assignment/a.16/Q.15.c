#include <stdio.h>

int main()
{
    int a, n, p;

    for (int i = 0; i < 100; i++)
    {
        n = i;

        for (int j = 2; j <= n; j++)
        {
            for (int k = 2; k <= j; k++)
            {
                if (n % k == 0)
                {
                    if (n == k)
                    {
                        printf("prime number - %d\n", k);
                        break;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
    return 0;
}