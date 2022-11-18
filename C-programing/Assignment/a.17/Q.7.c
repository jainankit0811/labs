#include <stdio.h>

int no(int n);
int no(int n)
{
    int p;
    for (int i = 0; i < 10; i++)
    {
        if (n == 10)
        {
            p = 1;
        }
    }

    return p;
}
int main()
{
    int n, a;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number - ");

        for (int j = 0; j < 10; j++)
        {
            scanf("%d", n);

            a = no(n);

            if (a == 1)
            {
                continue;
            }
        }
    }
    return 0;
}