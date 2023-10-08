#include <stdio.h>

int main()
{

    int n;
    int n1, n2;
    printf("How many time you sum any number.");
    scanf("%d", &n);
    while (n > 0)
    {
        printf("Enter number. \n");
        scanf(" %d \n %d \n ", &n1, &n2);
        int r = n1 + n2;
        printf("Sum of number - %d\n", r);
        n = n - 1;
    }

    return 0;
}