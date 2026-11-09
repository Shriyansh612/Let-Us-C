// Given an array of integers containing both positive and negative numbers, rearrange the array in-place so that all negative numbers appear before all positive numbers. Do not use an additional array or nested loops. 

// Hint: Think of how two pointers can swap elements as you scan through the array. 

// Function: void rearrangePosNeg(int *a, int n);

#include <stdio.h>

void rearrangePosNeg(int *ptr, int n);

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    rearrangePosNeg(arr,n);
    
    printf("Result:\n");
    for (int i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
int j;

void rearrangePosNeg(int *ptr,int n){
    int index=0,temp;
    for (int i=0;i<n;i++){
        if (*(ptr+i)<0){
            temp=*(ptr+index);
            *(ptr+index)=*(ptr+i);
            *(ptr+i)=temp;
            index++;
            for (j=index;j<i;j++){
                temp=*(ptr+j);
                *(ptr+j)=*(ptr+j+1);
                *(ptr+j+1)=temp;
            }
            temp = *(ptr+index);
            *(ptr+index)=*(ptr+j);
            *(ptr+j) = temp;
        }
    }
    return;
}