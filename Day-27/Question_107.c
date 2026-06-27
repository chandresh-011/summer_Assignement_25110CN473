#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, total;
};

int main()
{
    struct Employee e;
    
    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    printf("Enter Employee Name: ");
    scanf("%s", e.name);

    printf("Enter Basic Salary: ");
    scanf("%f", &e.basic);

    e.hra = e.basic * 0.20;
    e.da = e.basic * 0.10;
    e.total = e.basic + e.hra + e.da;

    printf("\nSalary Details\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Basic Salary: %.2f\n", e.basic);
    printf("HRA: %.2f\n", e.hra);
    printf("DA: %.2f\n", e.da);
    printf("Total Salary: %.2f\n", e.total);

    return 0;
}