#include <stdio.h>

void linear_search(int *, int *);

int main()
{

    int n[10], key, *A, i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter number - ");
        scanf("%d", &n[i]);
    }

    printf("Enter number - ");
    scanf("%d", &key);

    linear_search(&n[i], &key);

    if (key != 1)
    {
        printf("%d", key);
    }
    else
    {
        printf("not found.");
    }

    printf("%d", key);

    return 0;
}
void linear_search(int n[], int *q)
{
    int i;
    while (i != 0)
    {
        for (int i = 0; i < 10; i++)
        {

            if (n[i] == *q)
            {
                *q == 1;
                break;
            }
        }
        if (n[i] != *q)
        {
            *q == 0;
        }
    }
}
