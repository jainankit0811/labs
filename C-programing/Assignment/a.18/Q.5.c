#include <stdio.h>

int main()
{
    int n[10], smallest, r;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number - ");
        scanf("%d", &n[i]);
    }
    smallest = n[0] < n[1] ? n[0] : n[1];

    for (int i = 2; i < 10; i++)
    {
        smallest = smallest < n[i] ? smallest : n[i];
    }

    printf("Smallest number - %d", smallest);

    return 0;
}