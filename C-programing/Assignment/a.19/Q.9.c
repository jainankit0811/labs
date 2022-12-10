#include <stdio.h>

int main()
{
    int n[10], r, i, j, k;
    for (i = 0; i < 5; i++)
    {
        printf("Enter first array number. ");
        scanf("%d", &n[i]);
    }
    for (j = 5; j < 10; j++)
    {
        printf("Enter second array number.");
        scanf("%d", &n[j]);
    }

    int move = 0;
    for (int k = 0; k < 10; k++)
    {
        move = n[k];
        n[k] = n[i];
        n[i] = n[j];
    }

    printf("mergeing array is - ");

    for (int k = 0; k < 10; k++)
    {
        printf("%d\t", n[k]);
    }

    return 0;
}