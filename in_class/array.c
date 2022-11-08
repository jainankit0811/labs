<<<<<<< HEAD
#include <stdio.h>

int main()
{
    int n;
    int a[n];

    printf("How many times do you want to input - ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the age - ");
        scanf("%d",&a[i]);
    }
    
    for ( int i = 0; i < n; i++)
    {
    printf("%d ,",a[i]);
    }
    
    return 0;
=======
#include <stdio.h>

int main()
{
    int n;
    int a[n];

    printf("How many times do you want to input - ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the age - ");
        scanf("%d",&a[i]);
    }
    
    for ( int i = 0; i < n; i++)
    {
    printf("%d ,",a[i]);
    }
    
    return 0;
>>>>>>> 236851ad9c8c6be1eb09fb4426bf9c8dd248b1ad
}