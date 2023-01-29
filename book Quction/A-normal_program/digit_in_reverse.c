// digit in a revers order.
#include <stdio.h>

int main()
{
    int n = 12345, a, b = 10, c = 5;

    printf("Number is-%d\n", n);

    while (c != 0)
    {
        a = n % b;

        printf("%d\n", a);

        n = n / b;

        c = c - 1;
    }

    return 0;
}