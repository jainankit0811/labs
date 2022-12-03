#include <stdio.h>
int greatest(int n[]);
int greatest(int n[])
{

    int greatest, r;

    greatest = n[0] > n[1] ? n[0] : n[1];

    for (int i = 2; i < 10; i++)
    {
        greatest = greatest > n[i] ? greatest : n[i];
    }
    r = greatest;

    return r;
}

int main()
{
    int n[10], a;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number.");
        scanf("%d", &n[i]);
    }

    a = greatest(n);

    printf("greatest number - %d ", a);

    return 0;
}