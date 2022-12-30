// #include <stdio.h>

// int main()
// {
//     int a;

//     printf("Enter size of array - ");
//     scanf("%d", &a);

//     char n[a];
//     for (int i = 0; i < a; i++)
//     {
//         printf("Enter Alphabeat -");
//         scanf("%s", &n[i]);
//     }

//     for (int i = a; i < a; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("%c", n[i]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>

int main()
{
    int a;

    printf("Enter the higest aski value of array - ");
    scanf("%d", &a);

    char n[a];

    for (int i = 65; i <= a; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            printf("%c", i);
        }
        printf("\n");
    }

    return 0;
}