#include <stdio.h>

int main()
{

    int n[10];
    int greatest, a;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number - ");
        scanf("%d", &n[i]);
    }

    greatest = n[0] > n[1] ? n[0] : n[1];

    for (int i = 2; i < 10; i++)
    {
        greatest = greatest < n[i] ? n[i] : greatest;
    }
    printf("greatest number - %d", greatest);

    return 0;
}
