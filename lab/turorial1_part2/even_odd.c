#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if (x==0)
        printf("Zero");
    else if (x%2==0)
        printf("Even");
    else 
        printf ("Odd");            
    return 0;
}