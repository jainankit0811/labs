#include <stdio.h>

int eo(int n);

int eo(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

    return n;
}

int main()
{

    int n, result;

    printf("Enter number.\n");
    scanf("%d", &n);

    result = eo(n);

    if (result == 1)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }

    return 0;
}