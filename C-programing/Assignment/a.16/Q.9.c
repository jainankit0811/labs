#include <stdio.h>

int main()
{
    int s, n, i;

    printf("Enter number.");
    scanf("%d", &n);

    for (i = 0; n > 0; i++)
    {

        s = n % 10;

        printf("%d ", s);

        n = n / 10;
    }

    return 0;
}