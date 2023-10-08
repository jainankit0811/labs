#include <stdio.h>

int main()
{
    int n, s = 0;
    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else if (i % 2 != 0)
        {
            s = s + i;
        }
    }
    printf("%d", s);

    return 0;
}