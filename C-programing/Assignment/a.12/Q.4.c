#include <stdio.h>

int fct(int n);
int fct(int n)
{
    int s = 1;
    for (int i = 1; i <= n; i++)
    {

        s = s * i;
    }
    return s;
}
int main()
{

    int n;

    printf("Enter number.\n");
    scanf("%d", &n);

    int ans;
    ans = fct(n);

    printf("factorial-%d", ans);

    return 0;
}