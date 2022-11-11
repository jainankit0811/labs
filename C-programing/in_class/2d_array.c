#include <stdio.h>

int main()
{
    int a[500][500];

    for (int i = 0; i < 500; i++)
    {
        for (int j = 0; j < 500; j++)
        {
            printf("for i = %d and for j = %d it has value %d\n", i, j, a[i][j]);
        }
    }

    return 0;
}
