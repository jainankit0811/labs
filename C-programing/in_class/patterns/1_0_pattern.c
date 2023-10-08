#include <stdio.h>

int main()
{
    int n;
    int number;

    printf("Enter number - ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("%d", number = 1);
            }
            else
            {
                printf("%d", number = 0);
            }
        }
        printf("\n");
    }

    return 0;
}