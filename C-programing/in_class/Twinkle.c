// #include <stdio.h>

// int main()
// {
//     int a, b;
//     printf("Enter number\n");
//     scanf("%d", &a);
//     scanf("%d", &b);

//     int choice, yus;
//     printf("Wich Function want you perform.\n");
//     printf("  1. Addition\n  2. Subtract\n  3. Multipli\n  4. Divide\n");

//     printf("Enter Your choice.");
//     scanf("%d", &choice);
//     for (int i = 1; i > 0; i++)
//     {

//         if (choice < 5)
//         {
//             /* code */
//         }
//         else
//         {
//             /* code */
//         }
//         switch (choice)
//         {
//         case 1:
//             printf("Addition is - %d\n", a + b);

//             break;
//         case 2:
//             printf("Subtrect is - %d\n", a - b);

//             break;
//         case 3:
//             printf("Multipli is - %d\n", a * b);

//             break;
//         case 4:
//             printf("Divide is - %d\n", a * b);

//             break;
//         }
//     }
//     else {
//         printf("Wrong Choice")} printf("Do you want to continue. Press your opction.\nIf you want Exit.\n");
//     scanf("%d", &choice);
//     if (choice = yus)
//     {
//     }
//     else
//     {
//         break;
//     }
// }
// return 0;
// }
#include <stdio.h>

int main()
{
    int daysInCurrentFebruary = 29;
    int daysInJanuary = 31;
    int daysInFebruary = daysInCurrentFebruary;
    int daysInMarch = 31;
    int daysInApril = 30;
    int daysInMay = 31;
    int daysInJune = 30;
    int daysInJuly = 31;
    int daysInAugust = 31;
    int daysInSeptember = 3 * 10;
    int daysInOctober = 3 + 28;
    int daysInNovember = 3 * 10;
    int daysInDecember = 3 + 28;
    int daysInFirstHalf = daysInJanuary + daysInFebruary + daysInMarch + daysInApril + daysInMay + daysInJune;
    int daysInSecondHalf = daysInJuly + daysInAugust + daysInSeptember + daysInOctober + daysInNovember + daysInDecember;
    printf("Days in the first half of the current year: %d\n", daysInFirstHalf);
    printf("Days in the second half of the current year: %d\n", daysInSecondHalf);
    printf("Days in the current year: %d\n", daysInFirstHalf + daysInSecondHalf);
    return 0;
}
