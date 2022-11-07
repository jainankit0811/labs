#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Enter side.\n");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1==s2==s3){
		printf("It is Equilateral.\n");
	}
	else if(s1==s2||s2==s3||s1==s3){
		printf("It is Isosceles.\n");
	}
	else{
		printf("It is Scalene.");
	}
	return 0;
	
}
