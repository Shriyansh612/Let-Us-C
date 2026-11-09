#include <stdio.h>

int main()
{
    int a = 10,b = 20;
    int *p = &a,*q = &b;
    printf("Value of a(p points to): %d\n",*p);
    printf("Value of b(q points to): %d\n",*q);
    printf("Address of a: %d\n",p);
    printf("Address of b: %d\n",q);

    int *temp = p;
    p = q;
    q = temp;
    printf("p points to: %d\n",*p);
    printf("q points to: %d\n",*q);

    return 0;
}