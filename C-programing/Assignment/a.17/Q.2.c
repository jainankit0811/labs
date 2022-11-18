#include <stdio.h>

int prime(int n);
int prime(int n)
{
    int p;

    for (int i = 2; i > 0; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            scanf("Enter number - %d", &n);
            if (n % j == 0)
            {
                if (n == i)
                {
                    p = 1;
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
    int n, a;

    for (int j = 0; j < 10; j++)
    {

        a = prime(n);

        if (a == 1)
        {
            printf("It is a prime number.\n");

            break;
        }
        else
        {

            printf("sum is  %d", a);
        }
    }

    return 0;
}