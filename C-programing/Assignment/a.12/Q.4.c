#include <stdio.h>

int main()
{

    int n, s = 1;

    printf("Enter number.\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        s = s * i;

        printf("%d\n", s);
    }

    return 0;
}