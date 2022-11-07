#include<stdio.h>
int main()
{
	int n;
	printf("Enter number.\n");
	scanf ("%d",&n);
	if(n%2==0){
		printf("Number is even.\n");
		if(n%3==0&&n%2==0){
			printf("Number is divisible by 2 and 3.\n");
		    }
	    else if(n%3==0){ 
			printf("Nmber is divisible by 3.\n");
			}
		else if(n%2==0){
			printf("Number is divisible by 2.\n");
		    }
	    else{
			printf("Number is not divisible by 2 and 3.\n");
		    }   
		}
	else if(n%2==1){
		printf("Number is odd.\n");
		if(n%5==0){
			printf("Number is divisible by 5.\n");
		}
		else{
			printf("Number is not divisible by 5.\n");
		}
	}
	else if(n%2==0&&n%3==0&&n%5==0){
		printf("Number is not divisible by 5,3,2.");
	}
	return 0;
}
