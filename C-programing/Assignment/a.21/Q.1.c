#include <stdio.h>

int main()
{
<<<<<<< HEAD
    char n[] = {"ankit jain."};
    scanf("%ld", sizeof n);

=======
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
>>>>>>> a457e8bd50c3dabd31de5ab458f29d19f7e8222f
    return 0;
}