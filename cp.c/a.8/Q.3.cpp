#include<stdio.h>
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    if(n%3==0||n%2==0){
    printf("it is also divisible by 3&2.\n");
    }
    else if(n%3==0){
    printf("it is divisible by 3.\n"); 
    }   
    else if (n%2==0){
    printf("it is divisible by 2.\n");
    }
    else {
     printf("it is not divisible by 3&2.");
    }
  return 0;
}
