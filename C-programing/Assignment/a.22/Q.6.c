#include <stdio.h>

void array(int *, int *);

int main()
{

    int n, s = 0;

    printf("Enter size of the array - ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter number - ");
        scanf("%d", &a[i]);
    }

    array(&a[n], &n);
    return 0;
}
void array(int *p, int *q)
{
    for (int i = *q; i > 0; i--)
    {
        printf("Sum of the array is - %d\n", *p);
    }
}