#include <stdio.h>

int power(int,int);
int power(int a,int b){
    int p=1;
    for (int i=1;i<=b;i++){
        p*=a;
    }
    return p;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int pow = power(a,b);
    printf("%d",pow);
    return 0;
}