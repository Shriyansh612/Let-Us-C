#include <stdio.h>

int *secondLargest(int *ptr,int n);

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int *index = secondLargest(arr,n);
    if (index==NULL) printf("Not Found\n");
    else printf("Second Largest: %d",*index);

    return 0;
}

int *secondLargest(int *ptr,int n){
    int max = *ptr,second_max = max,flag = 0;
    int *index_max = ptr,*index_smax = ptr;
    for (int i=1;i<n;i++){
        if (*(ptr+i)==second_max && second_max!=max){
            flag = 1;
        }
        if (*(ptr+i)>max){
            second_max = max;
            flag = 0;
            index_smax = index_max;
            max = *(ptr+i);
            index_max = ptr+i;
        }
        else if (*(ptr+i)>second_max && *(ptr+i)<max){
            second_max = *(ptr+i);
            flag = 0;
            index_smax = ptr+i;
        }
        else if (*(ptr+i)<second_max && second_max == max){
            second_max = *(ptr+i);
            flag = 0;
            index_smax = ptr+i;
        }
    }
    if (second_max==max || flag==1) return NULL;
    return index_smax;
}