#include <stdio.h>

int main()
{
    struct student
    {
        int RN;
        float marks;
        char name;
    } s[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter name - ");
        scanf("%c", &s[i].name);

        printf("Enter roll no. - ");
        scanf("%d", &s[i].RN);

        printf("Enter marks - ");
        scanf("%f", &s[i].marks);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Name - %c   ", s[i].name);
        printf("Roll no.  - %d   ", s[i].RN);
        printf("Marks - %0.2f\n", s[i].marks);
    }

    return 0;
}