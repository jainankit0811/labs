#include <stdio.h>
int squar(int n);
int squar(int n)
{
    int r;
    r = n * n;
    return r;
}
int main()
{
    int n;
    printf("Enter number.\n");
    scanf("%d", &n);

    int a;
    a = squar(n);
    printf("squar is %d", a);
    return 0;
}
