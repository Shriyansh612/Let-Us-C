#include <stdio.h>
#include <stdlib.h>

int* input_array();

int main()
{
    int *ptr = input_array();

    printf("Given array: ");
    for (int i=0;i<*ptr;i++)
        printf("%d ",*(ptr+i+1));
    return 0;
}

int* input_array(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int *new_ptr = (int *)malloc((n+1)*sizeof(int));
    *new_ptr = n;
    // printf("%d\n",*new_ptr);
    printf("Enter elements of array: ");
    for (int i=1;i<n+1;i++){
        scanf("%d",new_ptr+i);
    }

    printf("Input complete\n");
    return new_ptr;
}