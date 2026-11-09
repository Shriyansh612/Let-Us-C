#include <stdio.h>

int fact(int n){
    int fact = 1;
    for (int i=1;i<=n;i++)
        fact*=i;
    return fact;        
}

int main()
{
    int c=1;
    int n;
    printf("Enter rows: ");
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        for (int k=n-i-1;k>0;k--){
            printf(" ");
        }
        for (int r=0;r<=i;r++){
            printf("%d ",fact(i)/(fact(r)*fact(i-r)));
        }
        printf("\n");
    }

    return 0;
}