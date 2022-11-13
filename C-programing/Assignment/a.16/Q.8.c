#include <stdio.h>

int main()
{
    int a, b, i;
    printf("Enter number.\n");
    scanf("%d%d", &a, &b);
    for (i = 2; i <= a; i++)
    {
        a = a % i;
        printf("%d", a);
    }
    return 0;
}