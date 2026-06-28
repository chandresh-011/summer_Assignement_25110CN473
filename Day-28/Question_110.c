#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank acc;
    float deposit, withdraw;

    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);
    acc.balance += deposit;

    printf("Enter Withdraw Amount: ");
    scanf("%f", &withdraw);

    if (withdraw <= acc.balance)
        acc.balance -= withdraw;
    else
        printf("Insufficient Balance\n");

    printf("\n--- Account Details ---\n");
    printf("Account No : %d\n", acc.accNo);
    printf("Name       : %s\n", acc.name);
    printf("Balance    : %.2f\n", acc.balance);

    return 0;
}