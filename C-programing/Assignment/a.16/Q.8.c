#include <stdio.h>

int main()
{
    int a, b, m;

    printf("Enter number.");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        m = a;
    }
    else if (b > a)
    {
        m = b;
    }
    for (int i = 1; i > 0; i++)
    {
        if (m % a == 0 && m % b == 0)
        {
            printf("LCM is - %d", m);
            break;
        }
        m++;
    }

    return 0;
}