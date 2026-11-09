#include <stdio.h>

int main()
{
    int arr[10];
    printf("Enter 10 numbers: ");
    for (int i=0;i<10;i++)
        scanf("%d",&arr[i]);

    int temp=0,temp2 = 0;

    for (int i=1;i<10;i++){
        for (int j=0;j<i;j++){
            if (arr[j]>arr[i]){
                temp = arr[i];
                // for (int k=j+1;k<=i;k++){
                //     temp2 = arr[k];
                //     arr[k]=arr[k-1]; 
                // }
                for (int k=i-2;k>=j;k--){
                    // temp2 = arr[k];
                    arr[k+1] = arr[k];
                }
                arr[i] = arr[j];
                arr[j]=temp;
                break;
            }
        }
    }        

    printf("Resultant Array: ");
    for (int i=0;i<10;i++)
        printf("%d ",arr[i]);

    return 0;
}