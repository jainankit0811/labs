#include <stdio.h>

int main()
{
    int a;
    printf("Enter how many unmber you want in a list :");
    scanf("%d", &a);

    for (int i = 1; i <= 10; i++)
    {
        int j = 0;
        j = i * i;
        printf("Squar is : %d", j);
    }

    return 0;
}