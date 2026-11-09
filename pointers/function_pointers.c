#include <stdio.h>

void square(int *,int);
void reverseDigits(int *,int);
void digitSum(int *,int);

void transform(int *ptr,int n,void (*operation)(int *,int)){
    operation(ptr,n);
}

int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    transform(arr,n,digitSum);

    printf("Result: ");
    for (int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}

void square(int *ptr,int n){
    for (int i=0;i<n;i++)
        *(ptr+i) = *(ptr+i)**(ptr+i);
    return;
}

void reverseDigits(int *ptr,int n){
    for (int i=0;i<n;i++){
        int rev = 0;
        while (*(ptr+i)>0){
            rev = rev*10 + *(ptr+i)%10;
            *(ptr+i) = *(ptr+i)/10;
        }
        *(ptr+i) = rev;
    }
    return;
}

void digitSum(int *ptr,int n){
    for (int i=0;i<n;i++){
        int sum = 0;
        while (*(ptr+i)>0){
            sum += *(ptr+i)%10;
            *(ptr+i) /= 10;
        } 
        *(ptr+i) = sum;
    }
    return;
}

