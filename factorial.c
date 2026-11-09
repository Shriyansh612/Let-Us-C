#include <stdio.h>

long long fact(int);

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Factorial: %lld",fact(n));
    return 0;
}

long long lon int fact(int n){
    if (n<0) return -1;
    if (n==0)
        return 1;
    return n*fact(n-1);    
}