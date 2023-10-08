#include <stdio.h>
int factorial(int n);
int factorial(int n){

        int s=1;
    for (int i = 1; i <= n; i++)
    {  

        s=s*i;

        printf("%d\n",s);
        
    }
        return n;

}
int main(){

    int n;
    
    printf("Enter number.\n");
    scanf("%d",&n);
    
    int r;

    r = factorial(n);

    return 0;

}