#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++) scanf("%d",&arr[i]);

    // int next,temp1,temp;
    // for (int i=1;i<n;i++){
    //     next = arr[i];
    //     for (int j=0;j<i;j++){
    //         if (next<arr[j]){
    //             temp1 = arr[j];
    //             for (int k=j;k<i;k++){
    //                 temp = arr[k+1];
    //                 arr[k+1] = temp1;
    //                 temp1 = temp;
    //             }
    //             arr[j] = next;
    //             break;
    //         }
    //     }
    // }

    int key;
    for (int i=1;i<n;i++){
        key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){  //set dec or inc order
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    printf("Sorted Array: ");
    for (int i=0;i<n;i++) printf("%d ",arr[i]);

    return 0;
}