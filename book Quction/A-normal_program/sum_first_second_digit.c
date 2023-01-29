// sum of first & last digit number.
#include <stdio.h>

int main()
{
    int n = 12345, a, b = 10, c = 5, sum = 0;

    printf("Number is-%d\n", n);

    while (c != 0)
    {
        a = n % b;

        n = n / (b * 1000);

        sum = a + sum;
        c = c - 1;
    }
    printf("sum of first and last number-%d", sum);

    return 0;
}