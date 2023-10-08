#include <stdio.h>
int digit(int n, int s);

int digit(int n, int s)
{
    int r;
    do
    {
        r = n % 10;
        if (r == s)
        {
            return 1;
        }
        n = n / 10;
    } while (n / 10 != 0);

    if (r != s)
    {
        return 0;
    }
}

int main()
{
    int n, s, A;

    printf("Enter number - ");
    scanf("%d", &n);

    printf("Enter which number you want to check. - ");
    scanf("%d", &s);

    A = digit(n, s);

    printf("\n\n");

    if (A == 1)
    {
        printf("the digit is in the number");
    }
    else
    {
        printf("the digit is not in the number");
    }

    return 0;
}
