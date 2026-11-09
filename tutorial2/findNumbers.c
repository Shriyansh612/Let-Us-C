#include <stdio.h>

void findNumbers(const long long int *ptr, long long int n, long long int *missing, long long int *repeated);
int main()
{
    long long int n, missing, repeated;
    printf("Enter number of elements: ");
    scanf("%lld", &n);

    long long int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%lld", &arr[i]);

    findNumbers(arr, n, &missing, &repeated);

    printf("Missing: %lld\n", missing);
    printf("Repeated: %lld\n", repeated);

    return 0;
}

void findNumbers(const long long int *ptr, long long int n, long long int *missing, long long int *repeated)
{
    long long int fact = 1, product = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        product *= *(ptr + i);
        fact *= i + 1;
        sum += *(ptr + i);
    }

    *repeated = ((product * sum) - product * n * (n + 1) / 2) / (product - fact);
    *missing = n * (n + 1) / 2 + *repeated - sum;

    return;
}