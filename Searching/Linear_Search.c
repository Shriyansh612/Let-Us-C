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

    int found=0;

    for (int i=0;i<n;i++){
        if (arr[i]==target){
            printf("Found at index %d\n",i);
            found++;
        }
    }

    if (found==0) printf("Not found");

    return 0;
}