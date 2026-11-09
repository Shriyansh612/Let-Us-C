#include <stdio.h>

int findMissing(int *ptr,int n);

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    return 0;
}

int findMissing(int *ptr,int n){
    int xor1=0;
}