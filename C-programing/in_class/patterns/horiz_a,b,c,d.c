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

    printf("Enter how many alphabet you - ");
    scanf("%d", &a);

    static int count1 = 64;
    static int count2 = 98;

    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                count1++;
                printf("%c", count1);
                count1 = count1 + 1;
            }
            else
            {
                printf("%c", count2);
                count2 = count2 + 1;
            }
        }
        printf("\n");
    }

    return 0;
}