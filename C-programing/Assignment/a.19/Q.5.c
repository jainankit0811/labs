#include <stdio.h>

int n[10];
int main()
{

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number - ");
        scanf("%d", &n[i]);
    }
    for (int i = 9; i >= 0; i--)
    {
        printf("reverse order - %d \n", n[i]);
    }

    return 0;
}