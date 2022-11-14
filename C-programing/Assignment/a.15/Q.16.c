#include <stdio.h>
int prime(int n, int l);
int prime(int n, int l)
{
    int p;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= i; j++)
        {

            if (j % 2 == 0)
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
    int n, A, l;
    printf("Enter first prime number.");
    scanf("%d", &n);

    printf("Enter last prime number.");
    scanf("%d", &l);

    for (int i = n; i > 0; i++)
    {

        A = prime(n, l);
        if (A == 1 && i < l)
        {

            printf("%d\n", i);
        }
        else if (A == 0 && l < i)
        {
        }
    }
    return 0;
}