#include <stdio.h>

int main()
{
    float a,b,c,e,x,r1,r2;
    printf("ax^2+bx+c-It is Quadratic equation.\n Enter the value of a,b,c\n ");
    scanf("%d%d%d",&a,&b,&c);
    e=(b*b)-4*a*c;
    switch(e>0)
    {
        case 1:
        r1=(-b+(e*e))/(2*a);
        r2=(-b-(e*e))/(2*a);
        printf("It is a distinct real root of aquadratic equation. %.2fand%.2f\n",r1,r2);
        break;
    }
    switch(e<0)
    {
    case 1:
    r1=(-b)/(2*a);
    r2=(-b)/(2*a);
        printf("It is a equal real root of aquadratic equation. %.2fand%.2f\n",r1,r2);
        break; 
    case 2: 
    r1=(-b+(e*e))/(2*a);
    r2=(-b-(e*e))/(2*a);
        printf("It is not a real root. %.2fand%.2f\n",r1,r2);
        break;
    default:
        break;
    }
    return 0;

}