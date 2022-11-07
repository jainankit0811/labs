#include <stdio.h>

int main()
{   
    int y;
    printf("Enter year number.\n");
    scanf("%d",&y);
    switch (y%4==0)
    {
    case 1:printf("It is leap year.\n");
        break;
    default:printf("It is not leap year.\n");
        break;
    }
    return 0;
}