#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int n;
    printf("Enter a number: ");
    scanf("%u",&n);
    unsigned int andmask;

    int count = 0;
    // if(n || 1){

    // }

    for (int i=floor(log2(n));i>=0;i--){
        andmask = 1<<i;
        if ((n&andmask)!=0)
            count++;
    }

    printf("Number of set bits: %d\n",count);

    if (count&1 == 0)
        printf("Even\n");
    else
        printf("Odd\n");
        
    unsigned int invert = ~n;
    
    unsigned int andmask2 = (1<<4)-1;
    
    printf("%d",invert&andmask2);


    return 0;
}