<<<<<<< HEAD
/*Author : Ankit Dhanawat
  Date : 20/10/22
  Aim : complite my assignmment
  language : c programming
*/
#include<stdio.h>
void a(){
	int a;
	printf("Value of the variable is-\n");
	scanf("%d",&a);
}
void b(){
	int a,b;
	printf("Value of the first variable is-\n");
	scanf("%d",&a);
	printf("Value of the second variable is-\n");
	scanf("%d",&b);
}
void c(){
	int a,b,c;
	printf("Value of the variable is-");
	scanf("%d",&a);
	printf(" and Value of the variable is-");
	scanf("%d",&b);
	printf(" and value of the variable is-");
	scanf("%d",&c);
}
void d(){
	int a,b,c,d;
	printf("First variable holds an integer constant \n");
	scanf("%d",&a);
	printf("Second variable holds an integer constant \n");
	scanf("%d",&b);
	printf("Third variable holds an integer constant \n");
	scanf("%d",&c);
	printf("Foth variable holds an integer constant \n");
	scanf("%d",&d);
}

int main()
{ /*a();
    b();
    c();
    d();*/
int R; 
printf("Enter any case number.\n");
scanf("%d",&R);
	switch(R){
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
		case 4:{
			d();
			break;
		}
		default :{
			printf("wrong input");
			break;
		}
	}
	
	return 0;
}
=======
/*Author : Ankit Dhanawat
  Date : 20/10/22
  Aim : complite my assignmment
  language : c programming
*/
#include<stdio.h>
void a(){
	int a;
	printf("Value of the variable is-\n");
	scanf("%d",&a);
}
void b(){
	int a,b;
	printf("Value of the first variable is-\n");
	scanf("%d",&a);
	printf("Value of the second variable is-\n");
	scanf("%d",&b);
}
void c(){
	int a,b,c;
	printf("Value of the variable is-");
	scanf("%d",&a);
	printf(" and Value of the variable is-");
	scanf("%d",&b);
	printf(" and value of the variable is-");
	scanf("%d",&c);
}
void d(){
	int a,b,c,d;
	printf("First variable holds an integer constant \n");
	scanf("%d",&a);
	printf("Second variable holds an integer constant \n");
	scanf("%d",&b);
	printf("Third variable holds an integer constant \n");
	scanf("%d",&c);
	printf("Foth variable holds an integer constant \n");
	scanf("%d",&d);
}

int main()
{ /*a();
    b();
    c();
    d();*/
int R; 
printf("Enter any case number.\n");
scanf("%d",&R);
	switch(R){
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
		case 4:{
			d();
			break;
		}
		default :{
			printf("wrong input");
			break;
		}
	}
	
	return 0;
}
>>>>>>> 236851ad9c8c6be1eb09fb4426bf9c8dd248b1ad
