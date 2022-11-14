#include <stdio.h>
int LCM(int n1, int n2);
int LCM(int n1, int n2)
{
    int r;
    for (int i = 2; i <= n1 || i <= n2; i++)
    {
        for (int j = 2; j <= i; j++)
        {

            if (n1 % j == 0 || n2 % j == 0)
            {
                r = j;
            }
            printf("%d\n", r);
        }
    }
    return r;
}

int main() /*
 {
     int n1, n2, n;
     printf("Enter nuber -");
     scanf("%d %d", &n1, &n2);

     for (int i = 2; i <= n1 || i <= n2; i++)
     {
         = n1 / i;
         if (n1 == i)
         {
             printf("%d%d\n", n1, n2);
         }
     }
     return 0;
 }*/
{
    int n1, n2, A;
    printf("Enter number -");
    scanf("%d %d", &n1, &n2);
    A = LCM(n1, n2);
    printf("%d\n", A);

    return 0;
}
