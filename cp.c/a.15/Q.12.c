#include <stdio.h>

int main()
{
    int a,b,c,d,i;
    printf("Enter number.\n");
    scanf("%d%d",&a,&b);
    for(i=2; i<=a; i++){
       if(a%i==0){
       printf("%d",&i);

    }
    }
    return 0;
}