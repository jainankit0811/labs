#include<stdio.h>
int main()
{
	int n,s=1,i;
	printf("Enter number \n ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		s=i*s;
		printf("\nfactorial.%d",s);
		}
	return 0;
}
