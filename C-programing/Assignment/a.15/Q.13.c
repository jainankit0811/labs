#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter number.\n");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n == i)
            {

                printf("%d is a prime number.\n", i);
                break;
            }
            else
            {
                printf("it is not a prime number.\n");
                break;
            }
        }
    }
}