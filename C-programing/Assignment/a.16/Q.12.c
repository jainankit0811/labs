#include <stdio.h>

int main()
{
    int n1 = 0, n2 = 1, n, n3;
    printf("Enter number.\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
        if (n3 == n)
        {
            printf("It is avilable in series.");
            break;
        }
    }

    return 0;
}