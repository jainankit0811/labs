#include<stdio.h>
int main()
{
	int m;
	printf("enter month.\n");
	scanf("%d",&m);
	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
		printf("31 days in a month.");
    }
	else if(m==2){
		printf("28 days in a month.");
	}
	else if(m==4 || m==6 || m==9 || m==11){
		printf("30 days in a month.");
	}
	else{
		printf("wrong inpute.");
	}
	return 0;
}
