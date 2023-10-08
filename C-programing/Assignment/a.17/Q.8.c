#include <stdio.h>

int main()
{
    int n, s = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number - ");
        scanf("%d", &n);
        if (n < 0)
        {
            continue;
        }
        else
        {
            s = s + n;
        }
    }
    printf("%d", s);

    return 0;
}