#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, n3, n, r, s = 1;
    printf("Enter number.\n");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        n3 = n1 + n2;
        printf("%d\n", n3);

        n1 = n2;
        n2 = n3;
    }
    return 0;
}
