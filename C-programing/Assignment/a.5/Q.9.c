#include <stdio.h>

int main()
{
	int H, E, S, M, SS, r;

	printf("Hindi marks is \n");
	scanf("%d", &H);

	printf("English marks is \n");
	scanf("%d", &E);

	printf("Scince marks is \n");
	scanf("%d", &S);

	printf("Maths marks is \n");
	scanf("%d", &M);

	printf("SS marks is \n");
	scanf("%d", &SS);

	r = H + E + S + M + SS;

	printf("Result is %d", r);

	return 0;
}