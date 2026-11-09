//passing an array to a function
#include <stdio.h>

void display1(int *,int);
void display2(int *,int);

int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    display1(arr,n);
    display2(arr,n);

    return 0;
}

//METHOD 1
void display1(int *ptr,int n){
    printf("Given Matrix: \n");
    for (int i=0;i<n;i++){
        printf("%d ",*(ptr+i));
    }
}

//METHOD 2
void display2(int arr1[],int n){
    printf("\nGiven Matrix: \n");
    for (int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
}