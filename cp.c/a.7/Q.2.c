#include<stdio.h>
int main() 
{
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
  return 0;
}
