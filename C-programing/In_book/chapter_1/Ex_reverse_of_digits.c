#include <stdio.h>

int main()
{
    int n = 54321, a;
    int b = 10, c = 1;

    printf("Befor a reverse order -%d\n", n);

    printf("After a reverse order -");
    for (int i = 0; i < 5; i++)
    {

        a = n % b;
        if (a > 9)
        {
            c = c * 10;
            a = a / c;
        }

        printf("%d", a);
        b = b * 10;
        n = n - a;
    }

    return 0;
}