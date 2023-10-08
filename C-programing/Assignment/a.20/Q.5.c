#include <stdio.h>

int main()
{
    struct stduent_Marks
    {
        int id;
        char name[40];
        float phy;
        float chem;
        float math;
        float Per;

    } s1, s2, s3, s4, s5;

    printf("Enter marks ( ID | Name | Phy | Chem | Math ) ");
    scanf("%d  %s  %f  %f  %f", &s1.id, &s1.name, &s1.phy, &s1.chem, &s1.math);
    s1.Per = ((s1.phy + s1.chem + s1.math) * 100) / 500;

    printf("Enter marks ( ID | Name | Phy | Chem | Math ) ");
    scanf("%d  %s  %f  %f  %f", &s2.id, &s2.name, &s2.phy, &s2.chem, &s2.math);
    s2.Per = ((s2.phy + s2.chem + s2.math) * 100) / 500;

    printf("Enter marks ( ID | Name | Phy | Chem | Math ) ");
    scanf("%d  %s  %f  %f  %f", &s3.id, &s3.name, &s3.phy, &s3.chem, &s3.math);
    s3.Per = ((s3.phy + s3.chem + s3.math) * 100) / 500;

    printf("Enter marks ( ID | Name | Phy | Chem | Math ) ");
    scanf("%d  %s  %f  %f  %f", &s4.id, &s4.name, &s4.phy, &s4.chem, &s4.math);
    s4.Per = ((s4.phy + s4.chem + s4.math) * 100) / 500;

    printf("Enter marks ( ID | Name | Phy | Chem | Math ) ");
    scanf("%d  %s  %f  %f  %f", &s5.id, &s5.name, &s5.phy, &s5.chem, &s5.math);
    s5.Per = ((s5.phy + s5.chem + s5.math) * 100) / 500;

    printf("ID - %d  Name - %s  Physics - %f  Chemistry - %f  Maths - %f  Persentage - %f\n", s1.id, s1.name, s1.phy, s1.chem, s1.math, s1.Per);

    printf("ID - %d  Name - %s  Physics - %f  Chemistry - %f  Maths - %f  Persentage - %f\n", s2.id, s2.name, s2.phy, s2.chem, s2.math, s2.Per);

    printf("ID - %d  Name - %s  Physics - %f  Chemistry - %f  Maths - %f  Persentage - %f\n", s3.id, s3.name, s3.phy, s3.chem, s3.math, s3.Per);

    printf("ID - %d  Name - %s  Physics - %f  Chemistry - %f  Maths - %f  Persentage - %f\n", s4.id, s4.name, s4.phy, s4.chem, s4.math, s4.Per);

    printf("ID - %d  Name - %s  Physics - %f  Chemistry - %f  Maths - %f  Persentage - %f", s5.id, s5.name, s5.phy, s5.chem, s5.math, s5.Per);

    return 0;
}
