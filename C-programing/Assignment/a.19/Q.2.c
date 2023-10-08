#include <stdio.h>
int smallest(int n[]);
int smallest(int n[])
{

    int smallest, r;

    smallest = n[0] < n[1] ? n[0] : n[1];

    for (int i = 2; i < 10; i++)
    {
        smallest = smallest < n[i] ? smallest : n[i];
    }
    r = smallest;

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

    a = smallest(n);

    printf("smalest number - %d ", a);

    return 0;
}