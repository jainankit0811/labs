#include <stdio.h.>

int main()
{

    int n;

    printf("Enter number.\n");
    scanf("%d", &n);

    while (n)
    {

        printf("Hello world.\n");
        n = n - 1;
    }

    return 0;
}