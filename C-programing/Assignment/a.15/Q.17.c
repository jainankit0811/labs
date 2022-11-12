#include <stdio.h>

int main()
{
    int n, r, s = 1;
    printf("Enter number.\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        s = i + s;
        printf("%d\n", s);
    }
    return 0;
}
