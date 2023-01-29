#include <stdio.h>

int main()
{
    struct student
    {
        int RN;
        float marks;
        char name;
    };
    struct student s1[70];
    for (int i = 0; i < 70; i++)
    {
        scanf("Enter name - %c", &s1[i]);
        scanf("Enter roll no. - %d", &s1[i]);
        scanf("Enter marks - %f", &s1);
    }
}