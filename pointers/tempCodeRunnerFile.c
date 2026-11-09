#include <stdio.h>

int main()
{
    int a=10,b=20,c=30;
    printf("%d\n",&a);
    printf("%d\n",&b);
    printf("%d\n",&c);
    printf("%d\n",&a-&b);
    printf("%d\n",&b-&c);
    printf("%d\n",&c-&a);

    return 0;
}