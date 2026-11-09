#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int n1 = n;

    for (int i=0;i<=9;i++){
        n = n1;
        while (n!=0){
            if (n%10==i)
                printf("%d",i);
            n=n/10;    
        }
    }
    return 0;
}