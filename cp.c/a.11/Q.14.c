#include<stdio.h>

int main()
{
    int a=2,i,s,n;
    printf("Enter number.\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        s=a*i;
        printf("%d\n",s);
    }
    return 0;
}