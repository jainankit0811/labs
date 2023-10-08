#include <stdio.h>

int main()
{
    int n1, n2, R = 0;
    printf("Enter number -");
    scanf("%d%d", &n1, &n2);

    for (int i = 2; i <= n1 || i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            R = i;
        }
    }
    printf("HCF is -%d", R);
    return 0;
}