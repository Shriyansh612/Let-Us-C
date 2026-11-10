#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++) scanf("%d",&arr[i]);

    int temp,min_ind;
    for (int i=0;i<n-1;i++){
        min_ind = i;
        for (int j=i;j<n;j++){
            if (arr[j]<arr[min_ind]){        //change order by this
                min_ind = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_ind];
        arr[min_ind] = temp;
    }

    printf("Sorted Array: ");
    for (int i=0;i<n;i++) printf("%d ",arr[i]);

    return 0;
}