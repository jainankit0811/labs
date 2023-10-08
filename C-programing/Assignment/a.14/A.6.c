<<<<<<< HEAD
/*author : Ankit Dhanawat
  Date : 20/10/22
  Aim : complite all assingment
  Language : c programming*/
#include<stdio.h>
void rectangl(){
  int L,B,A,P;   
    printf("enter value of lenth\n");
    scanf("%d",&L);
    printf("enter value of bregth\n");
    scanf("%d",&B);
    A=L*B;
    printf("Calculate area of rectangle%d\n",A);
    P=2*(L+B);
    printf("Calculate perimeter of rectangle%\n",P); 
}
void square(){  
  int S,A,P; 
   printf("enter value of side\n");
   scanf("%d",&S);
   A=S*S; 
   printf("Calculate area of square%d\n",A);
   P=4*S;
   printf("Calculete perimeter of square%d\n",P);
}
void circle(){
  int R,A,P,PI=3;
    printf("enter value of radius\n");
    scanf("%d",&R);
    A=PI*R*R;
    printf("Calculete area of circle%d\n",A);
    P=2*PI*R;
    printf("Calculete circumference of circle%d\n",P);
}
void triangle(){
  int s1,s2,s3,T;
   printf("enter first side of triangle\n");
   scanf("%d",&s1);
   printf("enter second side of triangle\n");
   scanf("%d",&s2);
   printf("enter third side of triangle\n");
   scanf("%d",&s3);
   T=s1+s2+s3;
   printf("Sum of total side%d",T);
}
void exam(){
    float H,E,M,S,SS,T,P,A;
    printf("enter your number in Hindi\n");
    scanf("%f",&H);
    printf("enter your number in English\n");
    scanf("%f",&E); 
    printf("enter your number in Maths\n");
    scanf("%f",&M);
    printf("enter your number in Scince\n");
    scanf("%f",&S);
    printf("enter your number in Social Scince\n");
    scanf("%f",&SS);
    T=H+E+M+S+SS;
    printf("Total marks in exam%f\n",T);
    P=100*T/500;
    printf("Percentage in exam%f\n",P);
    A=T/5;
    printf("Average marks in exam%f\n",A);
}
void asmd(){
	float A,S,M,D,n1,n2;
    printf("enter first number\n");
    scanf("%f",&n1);
    printf("enter second number \n");
    scanf("%f",&n2);
    A=n1+n2;
    printf("Sum two number %f\n",A);
    S=n1-n2;
    printf("subtract two number %f\n",S);
    M=n1*n2;
    printf("Multiply two number %f\n",M);
    D=n1/n2;
    printf("Divide two number %f\n",D);  
}
void cmi(){
	float D,CM,MM,I;
    printf("Enter distance in kms\n");
    scanf("%d",&D);
    CM=D*1000*100;
    printf("Distance in centimeter %d\n",CM);
    MM=CM*10;
    printf("Distence in millimeter %d\n",MM);
    I=D*39*1000;
    printf("Distence in inches %d\n",I);
}
int main()
{
	float z;
	printf("Enter your Quction number.(use decimal sequence ex.=1.1,2.2)%d\n");
	scanf("%f",&z);
	switch(z){
		case 1.1:{
			rectangle();
			break;
		}
		case 1.2:{
			square();
			break;
		}
		case 1.3:{
			circle
			break;
		}
		case 1.4
	}
	
  }  
=======
/*author : Ankit Dhanawat
  Date : 20/10/22
  Aim : complite all assingment
  Language : c programming*/
#include<stdio.h>
void rectangl(){
  int L,B,A,P;   
    printf("enter value of lenth\n");
    scanf("%d",&L);
    printf("enter value of bregth\n");
    scanf("%d",&B);
    A=L*B;
    printf("Calculate area of rectangle%d\n",A);
    P=2*(L+B);
    printf("Calculate perimeter of rectangle%\n",P); 
}
void square(){  
  int S,A,P; 
   printf("enter value of side\n");
   scanf("%d",&S);
   A=S*S; 
   printf("Calculate area of square%d\n",A);
   P=4*S;
   printf("Calculete perimeter of square%d\n",P);
}
void circle(){
  int R,A,P,PI=3;
    printf("enter value of radius\n");
    scanf("%d",&R);
    A=PI*R*R;
    printf("Calculete area of circle%d\n",A);
    P=2*PI*R;
    printf("Calculete circumference of circle%d\n",P);
}
void triangle(){
  int s1,s2,s3,T;
   printf("enter first side of triangle\n");
   scanf("%d",&s1);
   printf("enter second side of triangle\n");
   scanf("%d",&s2);
   printf("enter third side of triangle\n");
   scanf("%d",&s3);
   T=s1+s2+s3;
   printf("Sum of total side%d",T);
}
void exam(){
    float H,E,M,S,SS,T,P,A;
    printf("enter your number in Hindi\n");
    scanf("%f",&H);
    printf("enter your number in English\n");
    scanf("%f",&E); 
    printf("enter your number in Maths\n");
    scanf("%f",&M);
    printf("enter your number in Scince\n");
    scanf("%f",&S);
    printf("enter your number in Social Scince\n");
    scanf("%f",&SS);
    T=H+E+M+S+SS;
    printf("Total marks in exam%f\n",T);
    P=100*T/500;
    printf("Percentage in exam%f\n",P);
    A=T/5;
    printf("Average marks in exam%f\n",A);
}
void asmd(){
	float A,S,M,D,n1,n2;
    printf("enter first number\n");
    scanf("%f",&n1);
    printf("enter second number \n");
    scanf("%f",&n2);
    A=n1+n2;
    printf("Sum two number %f\n",A);
    S=n1-n2;
    printf("subtract two number %f\n",S);
    M=n1*n2;
    printf("Multiply two number %f\n",M);
    D=n1/n2;
    printf("Divide two number %f\n",D);  
}
void cmi(){
	float D,CM,MM,I;
    printf("Enter distance in kms\n");
    scanf("%d",&D);
    CM=D*1000*100;
    printf("Distance in centimeter %d\n",CM);
    MM=CM*10;
    printf("Distence in millimeter %d\n",MM);
    I=D*39*1000;
    printf("Distence in inches %d\n",I);
}
int main()
{
	float z;
	printf("Enter your Quction number.(use decimal sequence ex.=1.1,2.2)%d\n");
	scanf("%f",&z);
	switch(z){
		case 1.1:{
			rectangle();
			break;
		}
		case 1.2:{
			square();
			break;
		}
		case 1.3:{
			circle
			break;
		}
		case 1.4
	}
	
  }  
>>>>>>> 236851ad9c8c6be1eb09fb4426bf9c8dd248b1ad
