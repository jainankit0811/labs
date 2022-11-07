#include <stdio.h>

void area(){
    float a,r,PI=3.14;
    printf("Enter redius.\n");
    scanf("%f",&r);
    a=2*PI*r;
    printf("Area of circle-%f",a);
}
int main()
{
    area();
    

}