#include <stdio.h>

int digits(int n);
int digits(int n)
{
    int s;
    int p;
    do
    {

        for (int i = 1; i <= n; i++)
        {
            s = n % 10;
            p = i;
        }
    } while (n / 10 != 0);
    return p;
}

int main()
{
    int n, A;
    printf("Enter number.");
    scanf("%d", &n);

    A = digits(n);
    printf("%d", &A);

    return 0;
}