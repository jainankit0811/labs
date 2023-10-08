#include <stdio.h>

int main()
{
    int n = 54321, a;
    int r = 0;
    int b = 10000, c = 1;

    printf("number is -%d\n", n);

    printf("After a addtion -");
    for (int i = 1; i <= 5; i++)
    {

        a = n / b;
        r = r + a;

        n = n - a * b;
        b = b / 10;
    }
    printf("%d", r);

    return 0;
}