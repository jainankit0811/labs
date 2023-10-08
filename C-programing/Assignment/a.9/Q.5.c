#include<stdio.h>
int main()
{
	int y;
	printf("Enter year.\n");
	scanf("%d",&y);
	if(y%4==0){
	    printf("It is leap year.\n");
	}
	else{
		printf("It is not a leep year.\n");
	}
	return 0;
}
