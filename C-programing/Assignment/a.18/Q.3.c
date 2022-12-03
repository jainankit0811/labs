#include <stdio.h>

int main()
{
    int n[10], se = 0, so = 0, r = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number.");
        scanf("%d", &n[i]);

        if (n[i] % 2 == 0)
        {
            se = se + n[i];
        }

        else if (n[i] % 2 != 0)
        {
            so = so + n[i];
        }
    }

    printf("sum of even number - %d", se);
    printf("sum of odd number - %d", so);
    return 0;
}