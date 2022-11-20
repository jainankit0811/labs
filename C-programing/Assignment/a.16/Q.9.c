#include <stdio.h>

int main()
{
    int n[10];
    int i;

    printf("Enter number.");
    for (i = 0; i < 10; i++)
    {
        scanf("%d\n", &n[i]);
    }

    return 0;
}