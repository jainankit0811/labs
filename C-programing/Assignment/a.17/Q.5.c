#include <stdio.h>

int main()
{
    int n;
    printf("Enter number - ");
    for (int i = 1; i > 0; i++)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
    }
    return 0;
}