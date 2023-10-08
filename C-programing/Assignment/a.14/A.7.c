<<<<<<< HEAD
#include<stdio.h>
void a(){
    float a,b;
    printf("enter first number\n");
    scanf("%f",&a);
    printf("enter second number\n");
    scanf("%f",&b); 
 if(a>b)
{
    printf("largest number is %f\n",a);   
} else
{
    printf("largest number is %f\n",b); 
}
void b(){
	int n1=10,n2=5,n;
    printf("enter number\n"); 
    scanf("%d",&n);
    if(n==1)
    {
    printf("sum of two number%d\n",n1+n2);
    }
    else if(n==2)
    {
    printf("difference of two number%d\n",n1-n2);
    }
    else if(n==3)
    {
    printf("product of two number%d\n",n1*n2);
    }
    else if(n==4)
    {
    printf("quotient of two number%d\n",n1/n2);
    }
    else
    {
    printf("no operation %d",0);
    }
}
void c(){
	float n;
    printf("enter any number \n");
    scanf("%f",&n);
    if(n>=1||n<50)
    {
    printf("SUCCESS\n");
    }
    else if(n>=50||n<=100)
    {
    printf("FAIL");
    }
}
void d(){
    float n;
    printf("enter number \n");
    scanf("%f",&n);
    if(n<10)
    {
    printf("Number is less then ten.\n"); 
    }
    else if(n>10)
    {
    printf("Number is greater then ten.\n");  
    }
}
void e(){
  float n;
    printf("type any number\n");
    scanf("%f",&n); 
    if(n>=0) 
    {
    printf("Number is positive.\n"); 
    }
    else if(n<=0)
    {
    printf("number is nagative."); 
    }
}
void f(){
	int n;
    printf("enter any number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
    printf("it is even number\n");
    }
    else 
    {
    printf("it is odd number\n");  
    }
}
void g(){
	int n;
    printf("enter any number \n");
    scanf("%d",&n);
 if(n%5==0)
    {
    printf("It is divisuble by five.");
    }
 else
    {
    printf("It is not divisuble by five."); 
    }

}
void h(){
	int a,b,c;
	
}
void i(){
	int n1,n2,T;
    printf("Cost price is \n");
    scanf("%d",&n1);
    printf("Selling price is \n");
    scanf("%d",&n2);
    T=n2-n1;
    printf("Total %d\n",T);
    if(n2>n1){
    printf("Profite\n");
   }
    else{
    printf("Loss");
  }
}
void j(){
	int l1,l2,l3;
   printf("enter first length\n");
   scanf("%d",&l1);
   printf("enter second length\n");
   scanf("%d",&l2);
   printf("enter third length\n");
   scanf("%d",&l3);
   if(l1&&l2&&l3){
   printf("Three sides are avilabale.So it is triangle.");   
}
   else { 
   printf("Three sides are not avilabale.So it is not a triangle.");
}
int main()
{
	int n;
	printf("Enter Quction number.\n");
	scanf("%d",&n);
	switch (n){
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
		case 5:{
			e();
			break;
		}
		case 6:{
			f();
			break;
		}
		case 7:{
			g();
			break;
		}
		case 8:{
			h();
			break;
		} 
		case 9:{
			i();
			break;
		}
	}
	return 0;
}
=======
#include<stdio.h>
void a(){
    float a,b;
    printf("enter first number\n");
    scanf("%f",&a);
    printf("enter second number\n");
    scanf("%f",&b); 
 if(a>b)
{
    printf("largest number is %f\n",a);   
} else
{
    printf("largest number is %f\n",b); 
}
void b(){
	int n1=10,n2=5,n;
    printf("enter number\n"); 
    scanf("%d",&n);
    if(n==1)
    {
    printf("sum of two number%d\n",n1+n2);
    }
    else if(n==2)
    {
    printf("difference of two number%d\n",n1-n2);
    }
    else if(n==3)
    {
    printf("product of two number%d\n",n1*n2);
    }
    else if(n==4)
    {
    printf("quotient of two number%d\n",n1/n2);
    }
    else
    {
    printf("no operation %d",0);
    }
}
void c(){
	float n;
    printf("enter any number \n");
    scanf("%f",&n);
    if(n>=1||n<50)
    {
    printf("SUCCESS\n");
    }
    else if(n>=50||n<=100)
    {
    printf("FAIL");
    }
}
void d(){
    float n;
    printf("enter number \n");
    scanf("%f",&n);
    if(n<10)
    {
    printf("Number is less then ten.\n"); 
    }
    else if(n>10)
    {
    printf("Number is greater then ten.\n");  
    }
}
void e(){
  float n;
    printf("type any number\n");
    scanf("%f",&n); 
    if(n>=0) 
    {
    printf("Number is positive.\n"); 
    }
    else if(n<=0)
    {
    printf("number is nagative."); 
    }
}
void f(){
	int n;
    printf("enter any number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
    printf("it is even number\n");
    }
    else 
    {
    printf("it is odd number\n");  
    }
}
void g(){
	int n;
    printf("enter any number \n");
    scanf("%d",&n);
 if(n%5==0)
    {
    printf("It is divisuble by five.");
    }
 else
    {
    printf("It is not divisuble by five."); 
    }

}
void h(){
	int a,b,c;
	
}
void i(){
	int n1,n2,T;
    printf("Cost price is \n");
    scanf("%d",&n1);
    printf("Selling price is \n");
    scanf("%d",&n2);
    T=n2-n1;
    printf("Total %d\n",T);
    if(n2>n1){
    printf("Profite\n");
   }
    else{
    printf("Loss");
  }
}
void j(){
	int l1,l2,l3;
   printf("enter first length\n");
   scanf("%d",&l1);
   printf("enter second length\n");
   scanf("%d",&l2);
   printf("enter third length\n");
   scanf("%d",&l3);
   if(l1&&l2&&l3){
   printf("Three sides are avilabale.So it is triangle.");   
}
   else { 
   printf("Three sides are not avilabale.So it is not a triangle.");
}
int main()
{
	int n;
	printf("Enter Quction number.\n");
	scanf("%d",&n);
	switch (n){
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
		case 5:{
			e();
			break;
		}
		case 6:{
			f();
			break;
		}
		case 7:{
			g();
			break;
		}
		case 8:{
			h();
			break;
		} 
		case 9:{
			i();
			break;
		}
	}
	return 0;
}
>>>>>>> 236851ad9c8c6be1eb09fb4426bf9c8dd248b1ad
