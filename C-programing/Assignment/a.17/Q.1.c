#include <stdio.h>

int prime(int n);
int prime(int n)
{
    int p;

    for (int i = 2; i >= 0; i++)
    {
        scanf("%d", &n);
        for (int j = 2; j <= n; j++)
        {
            if (j % 2 == 0)
            {
                if (j == i)
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
    int n, s = 0, a;
    printf("Enter number. \n");
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &n);

        a = prime(n);
        if (a == 1)
        {
            break;
        }
        else if (a == 0)
        {
            s = s + n;
        }
    }
    printf("%d", s);

    return 0;
}