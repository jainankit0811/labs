#include <stdio.h>

int main()
{
    int n, s = 0;
    printf("Enter number - ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if (n < 0)
        {
            break;
        }
        else
        {

            s = n + s;
        }
    }
    printf("%d\n", s);

    return 0;
}