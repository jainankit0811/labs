#include <stdio.h>

int main()
{
    int n[10], smallest, a;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number - ");
        scanf("%d", &n[i]);
    }
    for (int i = 0; i <= 9; i++)
    {

        printf("copy array element - %d \n", n[i]);
    }

    return 0;
}