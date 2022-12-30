#include <stdio.h>

int main()
{
    int n = 54321, a;

    for (int i = 0; i < 5; i++)
    {
        a = n % 10;
        printf("%d\n", a);

        n = n - a;
    }

    return 0;
}