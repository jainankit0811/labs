<<<<<<< HEAD
#include<stdio.h>
int main()
{
	int n;
	printf("enter number.\n");
	scanf ("%d",&n);
	if(n>0){
		printf("Number is positive.\n");
		if(n%10==0){
			printf("Number is divisible by 10.\n");
		}
		else{
			printf("Number is not divisible by 10.\n" );
		}
	}
	else if(n<0){
		printf("Number is negative.\n");
	}
	else{
		printf("The number is Zero.\n");
	}
	return 0;
	
}
=======
#include<stdio.h>
int main()
{
	int n;
	printf("enter number.\n");
	scanf ("%d",&n);
	if(n>0){
		printf("Number is positive.\n");
		if(n%10==0){
			printf("Number is divisible by 10.\n");
		}
		else{
			printf("Number is not divisible by 10.\n" );
		}
	}
	else if(n<0){
		printf("Number is negative.\n");
	}
	else{
		printf("The number is Zero.\n");
	}
	return 0;
	
}
>>>>>>> 236851ad9c8c6be1eb09fb4426bf9c8dd248b1ad
