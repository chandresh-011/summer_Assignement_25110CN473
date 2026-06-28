#include <stdio.h>

struct Ticket
{
    char name[50];
    int seats;
};

int main()
{
    struct Ticket t;

    printf("Enter Passenger Name: ");
    scanf(" %[^\n]", t.name);

    printf("Enter Number of Seats: ");
    scanf("%d", &t.seats);

    printf("\n--- Ticket Details ---\n");
    printf("Passenger Name : %s\n", t.name);
    printf("Seats Booked   : %d\n", t.seats);

    return 0;
}