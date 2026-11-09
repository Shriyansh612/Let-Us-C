#include <stdio.h>

int square(int n);
void process (int *,int,int,int,int(*operation)(int));

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int step,start=0;
    printf("Enter step: ");
    scanf("%d",&step);
    printf("Enter starting index: ");
    scanf("%d",&start);        

    process(arr,n,start,step,square);

    printf("Result: ");
    for (int i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}

int square(int n){
    return n*n;
}

void process (int *ptr,int n,int start,int step,int(*operation)(int)){
    if (step<=0 || step>=n) return; 
    for (int i=start;i<n;i++){
        if ((i-start)%step==0){
            *(ptr+i) = operation(*(ptr+i));
        }
    }
}