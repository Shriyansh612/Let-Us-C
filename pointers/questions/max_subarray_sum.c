#include <stdio.h>

int maxSubArraySum(int *ptr,int n);

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Maximum Sum: %d",maxSubArraySum(arr,n));        

    return 0;
}

int maxSubArraySum(int *ptr,int n){
    int max_sum=*(ptr),curr_sum=*ptr;

    for (int i=1;i<n;i++){
        if (curr_sum<0) curr_sum = *(ptr+i);
        else curr_sum += *(ptr+i);


        if (curr_sum>max_sum) max_sum = curr_sum;
    }

    return max_sum;
}