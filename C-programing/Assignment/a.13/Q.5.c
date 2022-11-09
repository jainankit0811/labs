<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int s1,s2,s3,T;
    printf("Enter side number.\n");
    scanf("%d %d %d",&s1,&s2,&s3);
    switch (T)
    {
    case 1:
    if(s1==s2||s2==s3||s3==s1){
        printf("it is isosceles triangle.");
    }
    else{
        printf("it is not isosceles triangle.");
    }
    break;
    case 2:
    if (s1*s1==s2*s2+s3*s3||s2*s2==s3*s3+s1*s1||s3*s3==s1*s1+s2*s2)
    {
        printf("it is right angled triangle.");
    }
    else{
        printf("it is not right angle triangle.");
    }break;
    case 3:
    if (s1==s2==s3)
    {
        printf("it is equilateral triangle.");
    }
    else{
        printf("it is not equilateral triangle.");
    }
    break;
    default:
        printf("Exit");
        break;
    }
    return 0;
=======
#include <stdio.h>

int main()
{
    int s1,s2,s3,T;
    printf("Enter side number.\n");
    scanf("%d %d %d",&s1,&s2,&s3);
    switch (T)
    {
    case 1:
    if(s1==s2||s2==s3||s3==s1){
        printf("it is isosceles triangle.");
    }
    else{
        printf("it is not isosceles triangle.");
    }
    break;
    case 2:
    if (s1*s1==s2*s2+s3*s3||s2*s2==s3*s3+s1*s1||s3*s3==s1*s1+s2*s2)
    {
        printf("it is right angled triangle.");
    }
    else{
        printf("it is not right angle triangle.");
    }break;
    case 3:
    if (s1==s2==s3)
    {
        printf("it is equilateral triangle.");
    }
    else{
        printf("it is not equilateral triangle.");
    }
    break;
    default:
        printf("Exit");
        break;
    }
    return 0;
>>>>>>> 236851ad9c8c6be1eb09fb4426bf9c8dd248b1ad
}