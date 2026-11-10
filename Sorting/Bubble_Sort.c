#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++) scanf("%d",&arr[i]);

    int temp;
    for (int i=0;i<n-1;i++){        //last element will be sorted automatically
        for (int j=0;j<n-i-1;j++){  //sorted elements are not required to be swapped again and again and number of swaps = number of elements concerned - 1
            if (arr[j+1]<arr[j]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}