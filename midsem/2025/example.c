#include <stdio.h>

int main()
{
    int x=1,y=0;
    int p = x&&y||!y;
    int q = x!=x==y;
    if ((q||x++) && (y++));
    printf("%d %d %d %d",p,q,x,y);
    return 0;
}

