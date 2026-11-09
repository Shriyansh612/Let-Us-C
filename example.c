#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if (x&1>0)
        printf("Odd");
    else
        printf("Even");        
    return 0;
}