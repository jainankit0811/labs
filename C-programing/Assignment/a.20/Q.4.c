#include <stdio.h>

struct birthday
{
    int date;
    char month[20];
    int year;
};

int main()
{
    struct birthday a1, a2, a3, a4, a5;
    printf("Enter birthday ( Date | Month | year )");
    scanf("%d  %s  %d", &a1.date, &a1.month, &a1.year);
    printf("Enter birthday ( Date | Month | year )");
    scanf("%d  %s  %d", &a2.date, &a2.month, &a2.year);
    printf("Enter birthday ( Date | Month | year )");
    scanf("%d  %s  %d", &a3.date, &a3.month, &a3.year);
    printf("Enter birthday ( Date | Month | year )");
    scanf("%d  %s  %d", &a4.date, &a4.month, &a4.year);
    printf("Enter birthday ( Date | Month | year )");
    scanf("%d  %s  %d", &a5.date, &a5.month, &a5.year);

    printf("Date - %d  Month - %s  year - %d\n", a1.date, a1.month, a1.year);
    printf("Date - %d  Month - %s  year - %d\n", a2.date, a2.month, a2.year);
    printf("Date - %d  Month - %s  year - %d\n", a3.date, a3.month, a3.year);
    printf("Date - %d  Month - %s  year - %d\n", a4.date, a4.month, a4.year);
    printf("Date - %d  Month - %s  year - %d", a5.date, a5.month, a5.year);

    return 0;
}