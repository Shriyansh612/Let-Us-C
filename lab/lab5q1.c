#include <stdio.h>

int main()
{
    int n,sum=0,num_of_digits=0,largest = 0,digit;

    printf("Enter a number: ");
    scanf("%d",&n);

    while(n!=0){
        digit = n%10;
        sum+=digit;
        num_of_digits++;

        if (digit>largest)
            largest = digit;

        n=n/10;            
    }

    printf("Sum of Digits: %d\n",sum);
    printf("Number of Digits: %d\n",num_of_digits);
    printf("Largest of Digits: %d\n",largest);
    return 0;
}