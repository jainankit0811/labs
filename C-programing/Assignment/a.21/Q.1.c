#include <stdio.h>

int main()
{
    char n[] = {"ankit jain."};
    scanf("%ld", sizeof n);

    char n[100];
    int count = 0;

    printf("The a string - ");
    scanf("%s", n);

    for (int i = 0; i >= 0; i++)
    {
        if (n[i] == '\0')
        {
            break;
        }
        else
        {
            count++;
        }
    }

    printf("The size of the string is - %d", count);
    return 0;
}