#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter %d numbers: ",n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int rev[n];
    
    for (int i=0;i<n;i++){
        rev[i]=arr[n-i-1];
    }


    printf("Reversed Array: ");
    for (int i=0;i<n;i++)
        printf("%d ",rev[i]);

    return 0;
}