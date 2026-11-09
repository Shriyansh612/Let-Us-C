#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int longest=1,curr_length=1,value;
    
    for (int i=0;i<n-1;i++){
        if (arr[i]==arr[i+1])
            curr_length++;
        else
            curr_length=1;
            
        if (curr_length>longest){
            longest = curr_length;
            value = arr[i];            
        }
    }

    printf("%d appears %d times in a row",value,longest);

    return 0;
}