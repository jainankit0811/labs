#include <stdio.h>

int main()
{
    int n;
    for (int i = 1; i > 0; i++)
    {
        printf("Enter number.");
        scanf("%d", &n);

        if (n == 0)
        {
            break;
        }
        else if (n % 10 == 0)
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