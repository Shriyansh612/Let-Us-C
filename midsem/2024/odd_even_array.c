#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Input total number of elements: ");
    scanf("%d",&n);

    printf("Enter %d integers: \n",n);

    // int *numbers = malloc(n*sizeof(int));
    // int *even = malloc(n*sizeof(int));
    // int *odd = malloc(n*sizeof(int));

    int numbers[n];
    int even[n];
    int odd[n];

    for (int i=0;i<n;i++)
        scanf("%d",&numbers[i]);

    int c1=0,c2=0;

    for (int i=0;i<n;i++){
        if (numbers[i]%2==0)
            even[c1++] = numbers[i];
        else
            odd[c2++] = numbers[i];
    }

    printf("Even Numbers: ");
    for (int i=0;i<c1;i++)
        printf("%d ",even[i]);

    printf("\nOdd Numbers: ");

    for (int i=0;i<c2;i++)
        printf("%d ",odd[i]);

    return 0;
}