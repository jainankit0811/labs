#include<stdio.h>
int main()
{
    int a,b,c;
     printf("Enter first number\n");
     scanf("%d",&a);
     printf("Enter second number\n");
     scanf("%d",&b); 
     printf("Enter third number\n");
     scanf("%d",&c);
if(a>b&&c){
     printf("The greatest number is a\n");
    }
else if(b>c&&a){
     printf("The greatest number is b\n");
    }
else if(c>a&&b){
        printf("The greatest number is c\n");
    }
else{
   printf("No greatest number. ");
 }
   return 0;
}
