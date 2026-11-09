#include <stdio.h>

int fact(int n);

int main()
{
    printf("%d",fact(6));
    return 0;
}

int fact(int n){
    if (n==0) return 1;
    else return n*fact(n-1);
}