#include <stdio.h>

int even(int);
int prime(int);
int divisible3(int);
int filter(const int *, int, int *, int(*condition)(int));

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int dest[n];
    int len = filter(arr,n,dest,even);

    printf("Filtered elements: ");
    for (int i=0;i<len;i++)
        printf("%d ",dest[i]);

    return 0;
}

int even(int n){
    if (n%2==0) return 1;
    else return 0;
}

int prime(int n){
    int c=0;
    for (int i=1;i<=n;i++){
        if (n%i==0) c++;
    }
    if (c==2) return 1;
    else return 0;
}

int divisible3(int n){
    if (n%3==0) return 1;
    else return 0;
}

int filter(const int *ptr, int n, int *dest, int(*condition)(int)){
    int index = 0;
    for (int i=0;i<n;i++){
        if (condition(*(ptr+i))) 
            *(dest+index++) = *(ptr+i);
    }
    return index;
}