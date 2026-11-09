#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int n1 = n,n2 = n,digit,c=0,flag = 0;
    while (n!=0){
        n2 = n1;
        c=0;
        digit = n%10;

        while (n2!=0){
            if (digit==n2%10) c++;
            n2 = n2/10;
        }
        if (c>1){
            flag = 1;
            break;
        }
        n = n/10;
    }

    if (flag==1) printf("Not Unique");
    else printf("Unique");

    return 0;
}