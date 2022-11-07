<<<<<<< HEAD
#include<stdio.h>
int main()
{
   int PI=3;
   int L;
   int B;
   int S;
   int R;
   int s1;
   int s2;
   int s3;
   int A;
   int P;
   int T;
     printf("enter value of lenth\n");
      scanf("%d",&L);
     printf("enter value of bregth\n");
      scanf("%d",&B);
      A=L*B;
     printf("Calculate area of rectangle%d\n",A);
      P=2*(L+B);
     printf("Calculate perimeter of rectangle%d\n",P);
     printf("enter value of side\n");
     scanf("%d",&S);
      A=S*S;  
     printf("Calculate area of sqare%d\n",A);
      P=4*S;
     printf("Calculete perimeter of sqare%d\n",P);
     printf("enter value of radius\n");
      scanf("%d",&R);
      A=PI*R*R;
     printf("Calculete area of circle%d\n",A);
      P=2*PI*R;
     printf("Calculete circumference of circle%\n",P);
     printf("enter first side of triangle\n");
      scanf("%d",&s1);
     printf("enter second side of triangle\n");
      scanf("%d",&s2);
     printf("enter third side of triangle\n");
      scanf("%d",&s3);
      T=s1+s2+s3;
     printf("Sum of total side%d",T);
  return 0;
}
#include<stdio.h>
void rectangl()
{
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
void square()
{  
  int S,A,P; 
   printf("enter value of side\n");
    scanf("%d",&S);
    A=S*S; 
   printf("Calculate area of square%d\n",A);
    P=4*S;
   printf("Calculete perimeter of square%d\n",P);
}
void circle()
{
  int R,A,P,PI=3; 
    printf("enter value of radius\n");
     scanf("%d",&R);
     A=PI*R*R;
    printf("Calculete area of circle%d\n",A);
     P=2*PI*R;
    printf("Calculete circumference of circle%d\n",P);
}
void triangle()
{
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
int main()
{
     rectangl();  
     square();
     circle();
     triangle();
    return 0;
=======
#include<stdio.h>
int main()
{
   int PI=3;
   int L;
   int B;
   int S;
   int R;
   int s1;
   int s2;
   int s3;
   int A;
   int P;
   int T;
     printf("enter value of lenth\n");
      scanf("%d",&L);
     printf("enter value of bregth\n");
      scanf("%d",&B);
      A=L*B;
     printf("Calculate area of rectangle%d\n",A);
      P=2*(L+B);
     printf("Calculate perimeter of rectangle%d\n",P);
     printf("enter value of side\n");
     scanf("%d",&S);
      A=S*S;  
     printf("Calculate area of sqare%d\n",A);
      P=4*S;
     printf("Calculete perimeter of sqare%d\n",P);
     printf("enter value of radius\n");
      scanf("%d",&R);
      A=PI*R*R;
     printf("Calculete area of circle%d\n",A);
      P=2*PI*R;
     printf("Calculete circumference of circle%\n",P);
     printf("enter first side of triangle\n");
      scanf("%d",&s1);
     printf("enter second side of triangle\n");
      scanf("%d",&s2);
     printf("enter third side of triangle\n");
      scanf("%d",&s3);
      T=s1+s2+s3;
     printf("Sum of total side%d",T);
  return 0;
}
#include<stdio.h>
void rectangl()
{
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
void square()
{  
  int S,A,P; 
   printf("enter value of side\n");
    scanf("%d",&S);
    A=S*S; 
   printf("Calculate area of square%d\n",A);
    P=4*S;
   printf("Calculete perimeter of square%d\n",P);
}
void circle()
{
  int R,A,P,PI=3; 
    printf("enter value of radius\n");
     scanf("%d",&R);
     A=PI*R*R;
    printf("Calculete area of circle%d\n",A);
     P=2*PI*R;
    printf("Calculete circumference of circle%d\n",P);
}
void triangle()
{
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
int main()
{
     rectangl();  
     square();
     circle();
     triangle();
    return 0;
>>>>>>> 236851ad9c8c6be1eb09fb4426bf9c8dd248b1ad
}