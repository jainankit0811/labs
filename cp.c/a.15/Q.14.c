#include <stdio.h>

int main(){
    int n,i,a;
    printf("Enter number.\n");
    scanf("%d",&n);
    for (i=2; i<=n; i++){
        if(n%i==0){
            break;
        }
        else {
            printf("it is prime number.\n");
            for(i=2; i<=n; i++){
                
                if(n%i==0){
                break;
                }
                else if(n==i){
                    printf("It is prime number.\n");
                    }
                    break;
                    for(i=2; i>n; i++){
                        if (n%i==0){
                            break;
                        }
                        else if(n==i){
                            printf("next prime number is-%d",n);
                            break;
                        }    
                }
            break;
            }
        }
    }
    return 0;
}