#include <stdio.h>

int main()

{
    
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
  
   return 0;
}
