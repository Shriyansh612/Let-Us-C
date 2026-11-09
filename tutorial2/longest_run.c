#include <stdio.h>

int *LongestRun(int *,int,int *);

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements fo array: ");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int len=1;
    int *ind = LongestRun(arr,n,&len);

    printf("Sequence: ");
    for (int i=0;i<len;i++)
        printf("%d ",*(ind+i));
    printf("\nLength: %d\n",len);
    return 0;
}

int *LongestRun(int *ptr,int n,int *len_ptr){
    int curr_len=1;
    int index = 0;
    for (int i=0;i<n-1;i++){
        if (*(ptr+i+1)>*(ptr+i))
            curr_len++;
        else
            curr_len = 1;    
        if (curr_len>*len_ptr){
            *len_ptr = curr_len;
            index = i-curr_len+2;
        }           
    }
    return ptr+index; 
}