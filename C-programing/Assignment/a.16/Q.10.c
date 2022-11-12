#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, n, n3;
    printf("Which number want in Fibonnici series.\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        n3 = n2 + n1;

        n1 = n2;
        n2 = n3;
    }
    printf("%d", n3);
    return 0;
}