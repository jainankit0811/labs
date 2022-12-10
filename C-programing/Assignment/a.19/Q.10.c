#include <stdio.h>

int main()
{
    int a[5], b[5], c[10], i, k, j, m = 0;

    printf("Enter first array number.\n ");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter second array number.\n");

    for (j = 0; j < 5; j++)
    {
        scanf("%d", &b[j]);
    }

    while (k)
    {

        if (a[i] > b[j])
        {
            m = c[k];
            c[k] = b[i];
            i++;
        }
        else
        {
            m = c[k];
            c[k] = a[j];
            j++;
        }
        k++;
    }
    for (int k = 0; k < 10; k++)
    {
        printf("descending - %d\n", c[k]);
    }

    return 0;
}