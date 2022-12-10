#include <stdio.h>

void ascending();

void descending();

int n[10], r, move = 0;

int main()
{

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number - ");
        scanf("%d", &n[i]);
    }
    int r, move = 0;
    ascending();

    descending();

    return 0;
}
void ascending()
{

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
}
void descending()
{
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
}