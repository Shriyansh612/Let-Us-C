#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++) scanf("%d",&arr[i]);

    int target;
    printf("Enter element to be searched: ");
    scanf("%d",&target);

    // int found=0;

    int high=n-1,low=0,mid = (high+low)/2;

    while(low<=high){
        mid = (low+high)/2;
        if (target<arr[mid]){
            high = mid-1;
        }
        else if (target>arr[mid]){
            low = mid+1;
        }
        else{
            printf("Found at index %d\n",mid);
            return 0;
        }
    }

    printf("Not found");

    return 0;
}