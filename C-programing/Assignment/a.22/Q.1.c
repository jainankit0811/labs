#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a, b;
    printf("Enter number - ");
    scanf("%d  %d", &a, &b);
    printf("Main is befor swap - %d  %d\n", a, b);

    swap(&a, &b);

    printf("Main is after swap - %d  %d", a, b);

    return 0;
}
void swap(int *a, int *b)
{
    int c = 0;
    printf("In function befor swap - %d  %d\n", *a, *b);

    c = *a;
    *a = *b;
    *b = c;

    printf("In function after swap - %d %d\n", *a, *b);
}