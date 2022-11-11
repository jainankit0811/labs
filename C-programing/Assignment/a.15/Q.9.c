#include <stdio.h>
int digit(int n, int s);
int digit(int n, int s)
{
    do
    {
        int r;
        r = n % 10;
        if (r == s)
        {
        }
        printf("%d - is avileble.", r);
        return 1;
    }
    n = n / 10;
}
while (n / 10 != 0)
    ;
}
int main()
{
    int n, s, A;

    printf("Enter number - \n");
    scanf("%d", &n);

    printf("Enter which number you want to chak.\n");
    scanf("%d", &s);

    A =

        return 0;
}
