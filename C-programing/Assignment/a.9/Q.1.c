#include<stdio.h>
int main()
{int n1,n2;
	printf("enter any among\n");
    	scanf("%d%d",&n1,&n2);
	if(n1>n2){
    	printf("Greatest among is %d\n",n1);
    	if (n1>500&&1000>n1){
    		printf("among in a 500-1000\n");
    	}
    	else{
        	printf("among not in a 500-1000\n");
        }
	}
	else if(n2>n1){
	    printf("Greatest among is %d\n",n2);
	    if(n2>500&&1000>n2){
		    printf("among in a 500-1000\n");
		}
		else{
			printf("among not in a 500-1000\n");
		}
	}
	else{
		printf("among is eqal\n");
		}
	return 0;
}