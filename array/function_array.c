#include <stdio.h>

void modify(int *,int);

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    modify(&arr[0],10);

    printf("Output: ");
    for (int i=0;i<10;i++)
        printf("%d ",arr[i]);

    return 0;
}

void modify(int *j,int n){
    for (int i=0;i<n;i++){
        *j = *j*3;
        j++;
    }
    return;
}