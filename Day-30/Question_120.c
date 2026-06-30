#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
};

int main()
{
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    while (1)
    {
        printf("\n===== Student Management System =====");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Delete Student");
        printf("\n5. Count Students");
        printf("\n6. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Roll No: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf("%s", s[n].name);

            n++;
            break;

        case 2:
            for (i = 0; i < n; i++)
            {
                printf("\nRoll: %d", s[i].roll);
                printf("\nName: %s\n", s[i].name);
            }
            break;

        case 3:
            printf("Enter Roll No to Search: ");
            scanf("%d", &roll);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("Student Found");
                    printf("\nName: %s\n", s[i].name);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student Not Found\n");

            break;

        case 4:
            printf("Enter Roll No to Delete: ");
            scanf("%d", &roll);

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                        s[j] = s[j + 1];

                    n--;
                    printf("Record Deleted\n");
                    break;
                }
            }
            break;

        case 5:
            printf("Total Students = %d\n", n);
            break;

        case 6:
            return 0;

        default:
            printf("Invalid Choice\n");
        }
    }
}