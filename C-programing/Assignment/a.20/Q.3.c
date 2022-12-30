#include <stdio.h>

struct student
{
    int id;
    char name[40];
    int Roll_no;
    int Mob_no;
};

int main()
{
    struct student s1, s2, s3, s4;

    printf("Enter ( ID | Name | Roll no. | Mob no. ) - ");
    scanf("%d  %s  %d  %d", &s1.id, &s1.name, &s1.Roll_no, &s1.Mob_no);
    printf("Enter ( ID | Name | Roll no. | Mob no. ) - ");
    scanf("%d  %s  %d  %d", &s2.id, &s2.name, &s2.Roll_no, &s2.Mob_no);
    printf("Enter ( ID | Name | Roll no. | Mob no. ) - ");
    scanf("%d  %s  %d  %d", &s3.id, &s3.name, &s3.Roll_no, &s3.Mob_no);
    printf("Enter ( ID | Name | Roll no. | Mob no. ) - ");
    scanf("%d  %s  %d  %d", &s4.id, &s4.name, &s4.Roll_no, &s4.Mob_no);

    printf("ID %d  Name %s  Roll no. %d  Mob no. %d\n", s1.id, s1.name, s1.Roll_no, s1.Mob_no);
    printf("ID %d  Name %s  Roll no. %d  Mob no. %d\n", s2.id, s2.name, s2.Roll_no, s2.Mob_no);
    printf("ID %d  Name %s  Roll no. %d  Mob no. %d\n", s3.id, s3.name, s3.Roll_no, s3.Mob_no);
    printf("ID %d  Name %s  Roll no. %d  Mob no. %d\n", s4.id, s4.name, s4.Roll_no, s4.Mob_no);

    return 0;
}