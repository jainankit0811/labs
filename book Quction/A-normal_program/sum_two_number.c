// sum of two number.
#include <stdio.h>

int main()
{
    int n = 12345, a, b = 10, c = 5, d = 0;

    printf("Number is-%d\n", n);

    while (c != 0)
    {
        a = n % b;

        printf("%d\n", a);

        n = n / b;

        d = a + d;

        c = c - 1;
    }
    printf("Sum is-%d", d);

    return 0;
}