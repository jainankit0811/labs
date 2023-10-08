#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of the array - ");
    scanf("%d", &n);

    int a[n];
    int frequency[11] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < n; i++)
    {
        printf("Enter the number for the position %d - ", i + 1);
        scanf("%d", &a[i]);

        if (a[i] == 0)
        {
            frequency[0] += 1;
        }
        else if (a[i] == 1)
        {
            frequency[1] += 1;
        }
        else if (a[i] == 2)
        {
            frequency[2] += 1;
        }
        else if (a[i] == 3)
        {
            frequency[3] += 1;
        }
        else if (a[i] == 4)
        {
            frequency[4] += 1;
        }
        else if (a[i] == 5)
        {
            frequency[5] += 1;
        }
        else if (a[i] == 6)
        {
            frequency[6] += 1;
        }
        else if (a[i] == 7)
        {
            frequency[7] += 1;
        }
        else if (a[i] == 8)
        {
            frequency[8] += 1;
        }
        else if (a[i] == 9)
        {
            frequency[9] += 1;
        }
        else
        {
            frequency[10] += 1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Frequency of %d is %d\n", i, frequency[i]);
    }
    printf("Frequency of number larger than 9 is %d", frequency[10]);

    return 0;
}