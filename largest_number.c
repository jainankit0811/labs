#include <stdio.h>

int main()
{
    int n1 = 2, n2 = 2, n3 = 1;

    if (n1 > n2 && n3)
    {
        printf("%d", n1);
    }
    else if (n2 > n1 && n3)
    {
        printf("%d", n2);
    }
    else
    {
        printf("%d", n3);
    }

    return 0;
}