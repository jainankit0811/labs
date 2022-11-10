#include <stdio.h>

int odd(int n);
int odd(int n){

    for (int i = 1; i <= n; i++)
    {   
        printf("%d\n",i*2-1);

    }
    
    return n;

}
int main(){
    
    int n;

    printf("Enter how many time you enter odd number.\n");
    scanf("%d",&n);

    int r;

    r = odd(n);

    return 0;    

}