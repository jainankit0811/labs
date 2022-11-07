#include<stdio.h>
int main()
{
	int n,a,b,s;
	printf("Enter number.\n");
	    scanf("%d",&n);
	while (n>0){
	    printf("Enter two number.\n");
	    scanf("%d%d",&a,&b);
	    s=a+b;
	    printf("Enter sum of value.%d\n",s);
	    n=n-1;
    }
	return 0;
}
