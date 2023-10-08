#include <stdio.h>

int main()
{
    int n[10], s = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Enter number.");
        scanf("%d", &n[i]);

        s = s + n[i];
    }
    printf("Sum is - %d", s);

    return 0;
}