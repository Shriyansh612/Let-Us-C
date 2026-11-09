#include <stdio.h>

int main()
{
    int arr[10];

    printf("Enter 10 numbers: ");
    for (int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    int smallest = arr[0],largest = arr[0];

    for (int i=1;i<10;i++){
        if (arr[i]<smallest)
            smallest = arr[i];

        if (arr[i]>largest)
            largest = arr[i];            
    }

    printf("Smallest element: %d\n",smallest);
    printf("Largest element: %d\n",largest);

    return 0;
}