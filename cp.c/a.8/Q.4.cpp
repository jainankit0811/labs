#include<stdio.h>
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    if(n%7==0||n%3==0){
    printf("it is also divisible by 7&3.\n");
    }
    else if(n%7==0){
    printf("it is divisible by 7.\n"); 
    }   
    else if (n%3==0){
    printf("it is divisible by 3.\n");
    }
    else {
    printf("it is not divisible by 7&3.");
    }
  return 0;
}
