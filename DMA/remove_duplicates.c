// Q7. Remove Duplicates
// - Dynamically allocate an array of n integers.
// - Remove all duplicate elements.
// - Resize the allocated memory to the new array size using realloc().
// - Display the resulting array.
// Example:
// Input:  2 4 2 5 4 7 8 7

// Output: 2 4 5 7 8

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    
    int *arr = (int *)malloc(n*sizeof(int));
    
    if (arr==NULL){
        printf("Memory allocation failed");
        return 1;
    }
    printf("Enter elements of array: ");

    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int unique=0,flag = 0;
    
    for (int i=0;i<n;i++){
        for (int j=0;j<unique;j++){
            if (arr[j]==arr[i]){
                flag=1;
                break;
            }
        }
        if (flag==1){
            flag=0;
            continue;
        }

        arr[unique] = arr[i];
        unique++;
    }

    printf("%d\n",unique);

    int *temp_arr = (int *)realloc(arr,unique*sizeof(int));

    if (temp_arr==NULL){
        printf("memory allocation failed");
        free(arr);
        return 1;
    }
    arr = temp_arr;

    printf("Unique Elements: ");
    for (int i=0;i<unique;i++){
        printf("%d ",arr[i]);
    }

    free(arr);

    return 0;
}