#include<stdio.h>
int main()
{
  int n;
    printf("type any number\n");
    scanf("%d",&n); 
    if(n>0) 
    {
    printf("Number is positive.\n"); 
    }
    else if(n<0)
    {
    printf("number is nagative."); 
    }
    else
    {
    printf("number is zero.");
    }
    return 0;
}
