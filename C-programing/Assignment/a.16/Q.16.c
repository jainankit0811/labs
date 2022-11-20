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
    printf("Enter number.\n");
    scanf("%d", &n);
    printf("Enter last number.\n");
    scanf("%d", &l);

    for (int i = n; i <= l; i++)
    {
        A = prime(i);
        if (A == 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}