#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 numbers: ");
    for (int i=0;i<10;i++)
        scanf("%d",&arr[i]);

    int temp=0;

    for (int i=0;i<9;i++){
        for (int j=0;j<9-i;j++){
            if (arr[j+1]<arr[j]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp; 
            }
        }
    }
    printf("Sorted Array: ");        
    for (int i=0;i<9;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}