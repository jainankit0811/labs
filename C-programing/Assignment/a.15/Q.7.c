#include <stdio.h>

int main()
{
    int n, r, R;
    printf("Enter total number of objects in th set.\n");
    scanf("%d", &n);
    printf("Enter number of choosing objects from the set.\n");
    scanf("%d", &r);

    int a = 1, b = 1, c = 1, q, p, s;

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
    printf("Combination value - %d", R);

    return 0;
}