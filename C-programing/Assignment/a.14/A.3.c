s /*Author : Ankit Dhanawat
   Date : 20/10/22
   Aim : Try Try & Try
   language : c programming
   */
#include <stdio.h>
	void
	a()
{
	int a;
	printf("Enter the value of the variable-\n");
	scanf("%d", &a);
}
void b()
{
	int a, b;
	printf("Enter the value of the first variable-\n");
	scanf("%d", &a);
	printf("Enter the value of the second variable-\n");
	scanf("%d", &b);
}
void c()
{
	int a, b, c;
	printf("Enter the value of the first variable-\n");
	scanf("%d", &a);
	printf("Enter the value of the second variable-\n");
	scanf("%d", &b);
	printf("Enter the value of the third variable-\n");
	scanf("%d", &c);
	printf("Value of the first variable is %d\n", a);
	printf(" Value of the second variable is %d\n", b);
	printf(" Value of the third variable is %d\n", c);
}
int main()
{ /*
	 a();
	 b();
	 c();
 */
	int r;
	printf("Enter any case number.\n");
	scanf("%d", r);
	/*
	   switch(r){
		   case 1:{
			   a();
			   break;
		   }
		   case 2:{
			   b();
			   break;
		   }
		   case 3:{
			   c();
			   break;
		   }
		   default :{
			   printf("It is wrong input.\n");
			   break;
		   }
	   }*/
	if (r = 1)
	{
		a();
	}
	else if (r = 2)
	{
		b();
	}
	else if (r = 3)
	{
		c();
	}
	else
	{
		printf("It is wrong input.\n");
	}

	return 0;
}
