#include <stdio.h>
int main()
{
	int n;
	printf("Enter Quction number.\n");
	scanf("%d", &n);
	switch (n)
	{
	case 1:
	{
		printf("Hello.");
		break;
	}
	case 2:
	{
		printf("HELLO.");
		break;
	}
	case 3:
	{
		printf("HELLO WORLD.");
		break;
	}
	case 4:
	{
		printf("YOUR FIRST NAME.");
		break;
	}
	case 5:
	{
		printf("YOUR MIDDLE NAME.");
		break;
	}
	case 6:
	{
		printf("YOUR LAST NAME.");
		break;
	}
	case 7:
	{
		printf("YOUR FULL NAME.");
		break;
	}
	case 8:
	{
		printf("TECHNO NJR INDIA.");
		break;
	}
	case 9:
	{
		printf("'TECHNO NJR INDIA.'");
		break;
	}
	case 10:
	{
		printf("Hello.");
		break;
	}
	case 11:
	{
		char f[10], m[10], l[10];

		printf("ENTER YOUR FIRST NAME.\n");
		scanf("%s", &f);

		printf("ENTER YOUR MIDDLE NAME.\n");
		scanf("%s", &m);

		printf("ENTER YOUR LAST NAME.\n");
		scanf("%s", &l);

		printf("%s %s %s", f, m, l);
		break;
	}
	}
	return 0;
}
