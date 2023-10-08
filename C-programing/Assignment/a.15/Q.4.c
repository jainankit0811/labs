#include <stdio.h>

int number(int n);
int number(int n)
{

    printf("Enter number.\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return n;
}

int main()
{
    int n, N;

    N = number(n);

    return 0;
}