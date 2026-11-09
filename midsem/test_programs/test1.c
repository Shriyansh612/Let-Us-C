#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int c1=0,c2=0;
    (a%2==0)?c1++:c2++;
    (b%2==0)?c1++:c2++;
    (c%2==0)?c1++:c2++;
    printf("Even: %d\n",c1);
    printf("Odd %d",c2);
}