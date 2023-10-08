/*#include<stdio.h>
int main()
{
    int S=1000;
    int DA=500;
    int HR=200;
    int T=S+DA+HR;
         printf("Aman basice salary is %d\n",S);
         printf("Aman dearness allowance is %d\n",DA);
         printf("Aman house rent allowance is %d\n",HR);
         printf("aman total salary is %d",T);
     return 0;
}*/
#include<stdio.h>
int main()
{
    int S;
    int DA;
    int HR;
    int T;
    printf("Aman basice salary is \n");
     scanf("%d",&S);
    printf("Aman dearness allowance is \n");
     scanf("%d",&DA);
    printf("Aman house rent allowance is \n");
      scanf("%d",&HR);
    T=S+DA+HR;
    printf("Aman total salary is %d",T);
   return 0;
}