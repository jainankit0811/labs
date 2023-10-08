#include <stdio.h>

int main()
{
    int n, s = 0, t;

    printf("Enter number.");
    scanf("%d\n", n);

    s = n % 10;
    t = n - s;
    printf("%d", t);

    return 0;
}