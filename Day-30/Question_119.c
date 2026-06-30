#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, i, searchId;

    while (1)
    {
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", emp[n].name);

            n++;
            break;

        case 2:
            for (i = 0; i < n; i++)
            {
                printf("\nID: %d", emp[i].id);
                printf("\nName: %s\n", emp[i].name);
            }
            break;

        case 3:
            printf("Enter Employee ID: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == searchId)
                {
                    printf("Employee Found");
                    printf("\nName: %s\n", emp[i].name);
                }
            }
            break;

        case 4:
            return 0;
        }
    }
}