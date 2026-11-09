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

    printf("Missing: %d",findMissing(arr,n));        
    return 0;
}

int findMissing(int *ptr,int n){
    int sum1=0,sum2=0;
    for (int i=0;i<n;i++){
        sum1+=i;
        sum2+=*(ptr+i);
    }
    return sum1+n-sum2;
}