#include <stdio.h>

void reverse(int *,int);
void rotate(int *,int,int);

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    // reverse(arr,n);    

    int k;
    printf("Rotate by: ");
    scanf("%d",&k);

    rotate(arr,n,k%n);

    for (int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}

void reverse(int *ptr,int n){
    int temp;
    for (int i=0;i<n/2;i++){
        temp = *(ptr+i);
        *(ptr+i) = *(ptr+n-i-1);
        *(ptr+n-i-1) = temp;
    }
    return;
}

void rotate(int *ptr,int n,int k){
    reverse(ptr,n);
    reverse(ptr,k);
    reverse(ptr+k,n-k);
}