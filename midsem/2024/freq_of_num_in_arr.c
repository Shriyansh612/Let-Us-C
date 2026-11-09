#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Input total number of elements: ");
    scanf("%d",&n);

    int *numbers = malloc(n*sizeof(int));

    for (int i=0;i<n;i++){
        printf("Enter number of array: ");
        scanf("%d",&numbers[i]);
    }

    printf("Input a number: ");
    int a,freq=0;
    scanf("%d",&a);

    for (int i=0;i<n;i++){
        if (numbers[i]==a)
            freq++;
    }

    printf("Frequency: %d",freq);

    return 0;
}