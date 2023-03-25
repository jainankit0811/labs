#include <stdio.h>

int main()
{
    int a = 64, b = 1;
    for (int i = 0; i < 5; i++)
    {
        a = a + 1;
        for (int j = 0; j < b; j++)
        {
            printf("%c", a);
        }
        printf("\n");
        b = b + 1;
    }

    return 0;
}