#include <stdio.h>

struct Employee
{
    int id;
    char name[100];
    int salary;
};

int main()
{

    struct Employee a1, a2, a3;

    printf("Enter first Employee(ID name salary)- ");
    scanf("%d %s %d", &a1.id, &a1.name, &a1.salary);
    printf("Enter second Employee(ID name salary)- ");
    scanf("%d %s %d", &a2.id, &a2.name, &a2.salary);
    printf("Enter third Employee(ID name salary)- ");
    scanf("%d %s %d", &a3.id, &a3.name, &a3.salary);

    printf("ID | Name | Salary\n");
    printf("%d | %s | %d\n", a1.id, a1.name, a1.salary);
    printf("%d | %s | %d\n", a2.id, a2.name, a2.salary);
    printf("%d | %s | %d\n", a3.id, a3.name, a3.salary);

    return 0;
}