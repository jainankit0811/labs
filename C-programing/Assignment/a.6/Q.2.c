#include<stdio.h>

int main()

{

    int H;

    int E;

    int M;
 
    int S;

    int SS;
 
    int T;
 
    int P;
  
    int A;
  
     printf("enter your number in Hindi\n");

      scanf("%d",&H);

     printf("enter your number in English\n");

      scanf("%d",&E); 

     printf("enter your number in Maths\n");
 
      scanf("%d",&M);

     printf("enter your number in Scince\n");

      scanf("%d",&S);

     printf("enter your number in Social Scince\n");

      scanf("%d",&SS);

      T=H+E+M+S+SS;
 
     printf("Total marks in exam%d\n",T);
          P=100*T/500;

     printf("Percentage in exam%d\n",P);

      A=T/5;

     printf("Average marks in exam%d\n",A);
   
  return 0;
}