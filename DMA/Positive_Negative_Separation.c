// Q3. Positive and Negative Separation
// - Dynamically allocate an array of n integers.
// - Count positive, negative and zero elements.
// - Allocate two more dynamic arrays:
//   - One containing positive numbers.
//   - One containing negative numbers.
// - Display both arrays.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));

    if (arr==NULL){
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter elements of array: ");
    for (int i=0;i<n;i++) scanf("%d",&arr[i]);

    int c1=0,c2=0,c3=0;

    for (int i=0;i<n;i++){
        if (arr[i]>0) c1++;
        else if (arr[i]<0) c2++;
        else c3++;
    }

    int *pos = (int *)malloc((c1+1)*sizeof(int));
    int *neg = (int *)malloc((c2+1)*sizeof(int));

    if (pos==NULL || neg==NULL){
        printf("Memory allocation failed");
        free(arr);
        free(pos);
        free(neg);
        return 1;
    }

    int pos_idx=0,neg_idx=0;
    for (int i=0;i<n;i++){
        if (arr[i]>0) pos[pos_idx++]=arr[i];
        else if (arr[i]<0) neg[neg_idx++]=arr[i];
    }

    printf("Positive: ");
    for (int i=0;i<c1;i++) printf("%d ",pos[i]);
    printf("\nNegative: ");
    for (int i=0;i<c2;i++) printf("%d ",neg[i]);

    free(arr);
    free(pos);
    free(neg);

    return 0;
}