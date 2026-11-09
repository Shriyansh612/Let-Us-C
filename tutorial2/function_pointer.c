#include <stdio.h>

int reverseDigits(int);
int digitSum(int);
int square(int);

void transform(int *, int, int (*operation)(int));

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    transform(arr,n,reverseDigits);

    printf("Result: ");
    for (int i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}

int reverseDigits(int n){
    int rev = 0;
    while(n>0){
        rev = rev*10+n%10;
        n /= 10;
    }
    return rev;
}

int digitSum(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int square(int n){
    return n*n;
}

void transform(int *ptr,int n,int (*operation)(int)){
    for (int i=0;i<n;i++){
        *(ptr+i) = operation(*(ptr+i));
    }
    return;
}