#include<stdio.h>
int main()
{
	int a,n,o,t;
	printf("Enter number.\n");
	scanf("%d",&n);
	o=n%10;
	printf("On one's place-%d\n",o);
	a=n%100;
	t=a/10;
	printf("On ten's place-%d",t);
	return 0;
}
