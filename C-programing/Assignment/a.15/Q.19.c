#include <stdio.h>
int cube(int n);
int cube(int n)
{
    int r;
    r = n * n * n;
    return r;
}
int main()
{
    int n;
    printf("Enter number.\n");
    scanf("%d", &n);
    int a;
    a = cube(n);
    printf("cube is %d", a);
    return 0;
}