#include <stdio.h>

int main()
{
    int n,n1,result;
    printf("Enter a number: ");
    scanf("%d",&n);

    int product = 1;
    n1=n;
    while (n1!=0){
        product*=(n1%10);
        n1=n1/10;
    }

    int c = n+1,d = n+1;
    int product2 = -1;

    while(product!=product2){
        product2=1;
        while(d!=0){
            product2*=(d%10);
            d=d/10;
        }
        result = c;
        d=++c;
    }

    printf("Result: %d",result);

    return 0;
}