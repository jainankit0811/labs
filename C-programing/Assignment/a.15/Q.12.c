#include <stdio.h>

int main()
{
    int n1, n2, A = 0;
    printf("Enter number -");
    scanf("%d%d", &n1, &n2);
    for (int i = 2; i <= n1 || i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            A = i;
        }
    }
            printf("Hcf is -%d\n", A);

    return 0;
}