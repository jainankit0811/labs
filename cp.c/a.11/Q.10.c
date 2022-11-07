#include<stdio.h>
int main()
{
	int n,a;
	printf("How many time.\n");
	scanf("%d",&n);
	for(a=1; a<=n; a++){
		printf("%d\n",a*2-1);
	}
	return 0;
} 
