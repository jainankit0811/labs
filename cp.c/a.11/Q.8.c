#include<stdio.h>
int main()
{
	int n,b;
	printf("Enter number.");
	scanf("%d",&n);
    for(b=n; b>=1; b--){
    	printf("Natural number.%d\n",b);	
	}
	return 0;
}
/*
	int n,b;
	printf("Enter number.");
	scanf("%d",&n);
    for(b=1; b<=n; b++){
    	printf("Natural number.%d\n",b);	
	}
	return 0;*/
