#include <stdio.h>

int main()
{
    int n[10], smallest, a;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number - ");
        scanf("%d", &n[i]);
    }
    int r, move = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (n[i] > n[j])
            {
                move = n[i];
                n[i] = n[j];
                n[j] = move;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("ascending %d \n", n[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (n[i] < n[j])
            {
                move = n[i];
                n[i] = n[j];
                n[j] = move;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("descending %d \n", n[i]);
    }

    return 0;
}