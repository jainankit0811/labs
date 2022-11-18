#include <stdio.h>

int number(int n);
int number(int n)
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
    printf("Enter any 10 number. \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);

        a = number(n);

        if (a == 1)
        {
            break;
        }
    }

    return 0;
}