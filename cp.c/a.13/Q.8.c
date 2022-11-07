#include<stdio.h>

int main()
{   
    int p,n;
    printf("Enter number. \n");
    scanf("positive-%d negative-%d",&p,&n);
    switch (p>0||n<0)
    {
    case 1:
        printf("positive-%d negative-%d",&p,&n);
        break;
    default:
    printf("invalid.");
        break;
    }
    return 0;
}