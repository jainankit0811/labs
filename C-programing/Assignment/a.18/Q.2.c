#include <stdio.h>

int main()
{
    int n[10], a = 0, s = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter number.");
        scanf("%d", &n[i]);

        s = s + n[i];
    }
    a = s / 10;

    printf("Averaje is - %d", a);

    return 0;
}