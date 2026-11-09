#include <stdio.h>

int equilibrium_index(int *ptr,int n);

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    if (equilibrium_index(arr,n)<0) printf("Not Found\n");
    else printf("Equilibrium Index: %d",equilibrium_index(arr,n));


    return 0;
}

int equilibrium_index(int *ptr,int n){
    int sum=0;
    for (int i=0;i<n;i++)
        sum += *(ptr+i);

    int index = -1,curr_sum=0;
    for (int i=0;i<n;i++){
        if (curr_sum==sum-curr_sum-*(ptr+i)){
            index = i;
            break;
        }
        curr_sum += *(ptr+i);
    }
    return index;
}