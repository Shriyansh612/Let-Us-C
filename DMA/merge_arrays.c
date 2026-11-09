// Q8. Merge Two Dynamic Arrays
// - Dynamically allocate two arrays of sizes n and m.
// - Input their elements.
// - Merge them into a third dynamically allocated array.
// - Display the merged array.
// Bonus: Try merging two already sorted arrays while maintaining sorted order.

#include <stdio.h>
#include <stdlib.h>

int * input_arr(int n);

int main()
{
    int n,m;
    printf("Enter number of elements in array 1: ");
    scanf("%d",&n);
    printf("Enter number of elements in array 2: ");
    scanf("%d",&m);

    int *arr1 = input_arr(n);
    int *arr2 = input_arr(m);

    if (arr1==NULL || arr2==NULL){
        printf("Memory allocation failed");
        free(arr1);
        free(arr2);
        return 1;
    }

    int *mergearr = (int *)malloc((n+m)*sizeof(int));

    if (mergearr==NULL){
        printf("Memory allocation failed");
        free(arr1);
        free(arr2);
        return 1;
    }

    int ind1 = n-1,ind2 = m-1,i=n+m-1;
    while (ind1>=0 && ind2>=0){
        if (arr1[ind1]>=arr2[ind2]) mergearr[i--] = arr1[ind1--];
        else mergearr[i--] = arr2[ind2--];
    }

    while (ind1>=0){
        mergearr[i--] = arr1[ind1--];
    }

    while (ind2>=0){
        mergearr[i--] = arr2[ind2--];
    }
    
    printf("merged array: ");
    for (int i=0;i<n+m;i++){
        printf("%d ",mergearr[i]);
    }

    free(arr1);
    free(arr2);
    free(mergearr);

    return 0;
}

int * input_arr(int n){
    int *arr = (int *)malloc(n*sizeof(int));

    if (arr==NULL) return NULL;

    printf("Enter elements of array: ");
    for (int i=0;i<n;i++) scanf("%d",&arr[i]);

    return arr;
}