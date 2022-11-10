#include <stdio.h>
#define PI 3.14

float area(float r);
float area(float r)
{
    float a;

    a = 2 * PI * r;
    
    return a;
}
int main()
{
    float r, result;
    printf("Enter redius.\n");
    scanf("%f", &r);
    result = area(r);
    printf("area is - %0.2f\n", result);

    return 0;
}