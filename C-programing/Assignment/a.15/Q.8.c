#include <stdio.h>
int combination(int n, int r);
int combination(int n, int r)
{

    int a = 1, b = 1, c = 1, q, p, s, R;

    for (int i = 1; i <= n; i++)
    {
        a = i * a;
    }
    q = a;
    for (int i = 1; i <= r; i++)
    {
        b = i * b;
    }
    p = b;
    for (int i = 1; i <= (n - r); i++)
    {
        c = i * c;
    }
    s = c;

    R = (q) / (p * s);
    return R;
}
int main()
{
    int n, r, A;
    printf("Enter total number of objects in th set.\n");
    scanf("%d", &n);
    printf("Enter number of choosing objects from the set.\n");
    scanf("%d", &r);
    A = combination(n, r);
    printf("Combination Value - %d", A);

    return 0;
}