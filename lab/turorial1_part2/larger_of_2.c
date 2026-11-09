#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a==b)
        printf("Equal");
    else if (a>b)
        printf("a is greater than b");
    else
        printf("b is greater than a");        
    return 0;
}