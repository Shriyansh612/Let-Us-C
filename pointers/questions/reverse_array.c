#include <stdio.h>

int main()
{
    int n,temp;
    printf("Enter how many elements do you want to enter: ");
    scanf("%d",&n);
    
    int arr[n];
    int *ptr = arr;
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++)
        scanf("%d",ptr+i);

    for (int i=0;i<n/2;i++){
        temp = *(ptr+i);
        *(ptr+i) = *(ptr+n-1-i);
        *(ptr+n-1-i) = temp;
    }

    printf("Reversed Array: ");
    for (int i=0;i<n;i++)
        printf("%d ",*(ptr+i));

    return 0;
}