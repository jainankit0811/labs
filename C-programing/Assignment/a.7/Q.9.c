#include<stdio.h>

int main()

{

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
  
    return 0; 
}