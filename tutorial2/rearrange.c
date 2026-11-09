#include <stdio.h>

void rearrange(int *,int);
void rearrange2(int *,int);
int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of Array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    rearrange2(arr,n);

    printf("Rearranged Array: ");
    for (int i=0;i<n;i++)
        printf("%d ",arr[i]);
    
    return 0;    
}

void rearrange(int *ptr,int n){
    int positive[n],negative[n];
    int c1=0,c2=0;

    for (int i=0;i<n;i++){
        if (*(ptr+i)>=0){
            positive[c1] = *(ptr+i);
            c1++;
        }
        else{
            negative[c2] = *(ptr+i);
            c2++;
        }
    }

    for (int i=0;i<n;i++){
        if (i<c2)
            *(ptr+i) = negative[i];
        else
            *(ptr+i) = positive[i-c2];    
    }
    return;
}

void rearrange2(int *arr,int n){
    return;
}