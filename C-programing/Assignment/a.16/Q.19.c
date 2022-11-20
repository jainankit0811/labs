#include <stdio.h>
int an(int n);
int an(int n)
{
    int s, r, t = 0;

    for (int i = 1; i < n; i++)
    {

        if (n > 0 && n < 10)
        {

            s = i % 10;
            r = s * s * s;
            t = t + r;
            break;
        }
        else
        {
            s = n % 10;
            r = s * s * s;
            t = t + r;
        }
        n = n / 10;
    }

    return t;
}

int main()
{
    int n, a;

    printf("Enter number.");
    scanf("%d", &n);

    a = an(n);
    return 0;
}