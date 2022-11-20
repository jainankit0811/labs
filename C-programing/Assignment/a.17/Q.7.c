#include <stdio.h>

int main()
{
    int a, n, r;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number.");
        scanf("%d", &n);

        if (n == 10)
        {
            continue;
        }
        else
        {
            printf("%d\n", n);
        }
    }

    return 0;
}