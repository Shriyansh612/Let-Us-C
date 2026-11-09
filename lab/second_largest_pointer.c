#include <stdio.h>

int * second_largest(int *,int,int *);

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int index;

    int *sec_max = second_largest(arr,n,&index);
    // if (*sec_max==NULL){
    //     printf("Not Found");
    //     return 0;
    // }

    printf("%d\n",*sec_max);    
    printf("Index: %d\n",index);
    
    return 0;
}

int * second_largest(int *ptr,int n,int *index){
    int *max = ptr,*sec_max = ptr;
    int index1=0,index2=0,count=0;
    for (int i=1;i<n;i++){
        if (*(ptr+i)>*max){
            index2=index1;
            sec_max = max;
            index1=i;
            max = ptr+i;
        }
        else if (*(ptr+i)<*max && *(ptr+i)>*sec_max){
            sec_max = ptr+i;
            index2 = i;
        }
        else{
            
        }
    }
    *index = index2;
    // for (int i=0;i<n;i++){
    //     if (*(ptr+i) == *sec_max)
    //         count++;
    // }
    // if (count>1)
    //     return NULL;
    return sec_max;
}