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
    int n = 0, choice, i, searchRoll;

    while (1)
    {
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Exit");
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
            scanf("%d", &searchRoll);

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == searchRoll)
                {
                    printf("Student Found");
                    printf("\nName: %s", s[i].name);
                }
            }
            break;

        case 4:
            return 0;
        }
    }
}