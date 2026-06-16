#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = 5;  // Numbers should be from 1 to 5
    int sum = 0, expectedSum, missing;

    for (int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    expectedSum = n * (n + 1) / 2;
    missing = expectedSum - sum;

    printf("Missing Number = %d\n", missing);

    return 0;
}