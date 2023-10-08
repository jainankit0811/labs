#include<stdio.h>
int main()
{
	int H,E,M,S,SS,T,Per;
	printf("Enter marks-\n");
	scanf ("%d%d%d%d%d",&H,&E,&M,&S,&SS);
	T=H+E+M+S+SS;
	Per=100*T/500;
	if(Per<33){
	}
	else if(Per>33){
	printf("Total marks-%d\n",T);
	printf("Total percentage-%d\n",Per);
	}
	return 0;
	 
}