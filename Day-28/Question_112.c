#include <stdio.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact c;

    printf("Enter Name: ");
    scanf(" %[^\n]", c.name);

    printf("Enter Phone Number: ");
    scanf("%s", c.phone);

    printf("Enter Email: ");
    scanf("%s", c.email);

    printf("\n--- Contact Details ---\n");
    printf("Name  : %s\n", c.name);
    printf("Phone : %s\n", c.phone);
    printf("Email : %s\n", c.email);

    return 0;
}