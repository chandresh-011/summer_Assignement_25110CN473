#include <stdio.h>
#include <string.h>

int main()
{
    char books[100][50];
    int n = 0, choice, i;
    char search[50];

    while (1)
    {
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book Name: ");
            scanf("%s", books[n]);
            n++;
            break;

        case 2:
            printf("\nBooks Available:\n");
            for (i = 0; i < n; i++)
                printf("%s\n", books[i]);
            break;

        case 3:
            printf("Enter Book Name: ");
            scanf("%s", search);

            for (i = 0; i < n; i++)
            {
                if (strcmp(books[i], search) == 0)
                {
                    printf("Book Found\n");
                    break;
                }
            }
            break;

        case 4:
            return 0;
        }
    }
}