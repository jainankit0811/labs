#include <stdio.h>

int amount(int p , int r , int t);
int amount(int p , int r , int t)

{
    int a;
    a = p*(1 + r * t);
    
    return a;
}

int main()
{
    int  p, r, t;
    
    int A;

    printf("Enter which amount you want.\n");
    scanf("%d", &p);

    printf("how much is the intrest.\n");
    scanf("%d", &r);

    printf("for how do you wanted.\n");
    scanf("%d", &t);

    A=amount(p,r,t);
    printf("Total amount.%d\n",A);

    return 0;

}