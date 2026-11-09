#include <stdio.h>

void circle(int *,int *,int *);

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    //Using XOR
    // a = a^b;
    // b = a^b;
    // a = a^b;

    // b = b^c;
    // c = b^c;
    // b = b^c;

    //Using Big Brain
    // a=a+b;
    // b=b+c;
    // c=a-b+c;
    // b=b+c-a;
    // a=a-c;

    // circle(&a,&b,&c);

    printf("a=%d,b= %d,c= %d",a,b,c);

    return 0;
}

void circle (int *x,int *y, int *z){
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
    return; 
}