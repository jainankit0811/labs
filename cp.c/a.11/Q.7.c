#include<stdio.h>

int main()
{
    int n,o,a;
    printf("Enter number.\n");
    scanf("%d",&n);
    o=n%10;
    a=n-o;
    printf("Output.%d",a);
    return 0;
}