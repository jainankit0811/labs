#include<stdio.h>

int main()
{
    int n,i;
    printf("How many time.");
    scanf("%d",&n);
    for (i=n; i>=1; i--)
    {
        printf("%d\n",i*2-1);
    }
    return 0;
}