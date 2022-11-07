<<<<<<< HEAD
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
=======
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
>>>>>>> 236851ad9c8c6be1eb09fb4426bf9c8dd248b1ad
