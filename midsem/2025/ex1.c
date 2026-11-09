#include <stdio.h>

int main()
{
    int x=10,y=11,z=12,result;
    result = (++x<--y)?((y<z)?y:((x<z)?x:z)):((x-z>y)?(x+z):((y%2==0)?z:y));
    printf("x=%d,y=%d,z=%d,result=%d",x,y,z,result);
    result = (++x*++y>--z)?((z<0)?(x+y):(y-z)):((x%2==0)?((y>5)?z:x):(z+y));
    printf("x=%d,y=%d,z=%d,result=%d",x,y,z,result);
    return 0;
}