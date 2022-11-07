#include <stdio.h>

int main()
{
    int n,i,s=1;
    printf("Enter number.\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        s=i*s;
        printf("%d\n",s);
    }
    return 0;
}