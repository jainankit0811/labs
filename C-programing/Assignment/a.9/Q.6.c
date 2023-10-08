#include<stdio.h>
int main()
{
	int P,B,H;
	printf("Enter side.\n");
	scanf("%d%d%d",&P,&B,&H);
	if(H*H==P*P+B*B){
	printf("This is triangle.\n");
    {
    	if(P+B>H||B+H>P||H+P>B){
		printf("All condition is valid.\n");
	    }
	    else{
	    	printf("Condition is not valaid.\n");
		}
	}	
    } 
	else{
		printf("this is not a triangle.\n");
	}
	return 0;
}
