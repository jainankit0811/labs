#include <stdio.h>
int fc(int n);
int fc(int n)
{
    int r;
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            s = s * j;
        }
        r = s / i;
        printf("%d\n", r);
    }

    return r;
}

int main()
{
    int n;
    printf("Enter number.");
    scanf("%d", &n);
    int a;
    a = fc(n);

    printf("%d\n", a);
    return 0;
}