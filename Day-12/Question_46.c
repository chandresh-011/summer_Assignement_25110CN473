#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int temp = n, sum = 0, digits = 0, rem;

    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;
        sum += (int)pow(rem, digits);
        temp /= 10;
    }

    printf("sum = %d, n = %d\n", sum, n);
    return sum == n;;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}