#include <stdio.h>

int main()
{
    int n, number = 1;

    printf("Enter number -");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

    return 0;
}