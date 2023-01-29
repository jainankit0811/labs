#include <stdio.h>

int main()
{
<<<<<<< HEAD
<<<<<<<< HEAD:C-programing/Assignment/a.19/Q.9.c
    int n[10], r, i, j, k;
========
    int a[5], b[5], c[10], i, k, j, m = 0;

    printf("Enter first array number.\n ");

>>>>>>>> a457e8bd50c3dabd31de5ab458f29d19f7e8222f:C-programing/Assignment/a.19/Q.10.c
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
<<<<<<<< HEAD:C-programing/Assignment/a.19/Q.9.c
    for (j = 5; j < 10; j++)
========

    printf("Enter second array number.\n");

    for (j = 0; j < 5; j++)
>>>>>>>> a457e8bd50c3dabd31de5ab458f29d19f7e8222f:C-programing/Assignment/a.19/Q.10.c
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
=======
    int n[10], r, i, j, k;
    for (i = 0; i < 5; i++)
    {
        printf("Enter first array number. ");
        scanf("%d", &n[i]);
    }
    for (j = 5; j < 10; j++)
    {
        printf("Enter second array number.");
        scanf("%d", &n[j]);
    }

    int move = 0;
    for (int k = 0; k < 10; k++)
    {
        move = n[k];
        n[k] = n[i];
        n[i] = n[j];
    }

    printf("mergeing array is - ");

    for (int k = 0; k < 10; k++)
    {
        printf("%d\t", n[k]);
>>>>>>> a457e8bd50c3dabd31de5ab458f29d19f7e8222f
    }

    return 0;
}