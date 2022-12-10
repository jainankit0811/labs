#include <stdio.h>

int main()
{

    int n[10], move;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number - ");
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        move = n[i];
        n[i] = n[i++];
        if (move == n[i])
        {
            printf("%d", i++);
            break;
        }
    }

    return 0;
}