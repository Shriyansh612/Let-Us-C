#include <stdio.h>
#include <math.h>

int reverse(int n);

int main()
{
    printf("%d",reverse(3431));
    return 0;
}

int reverse(int n){
    static int rev = 0;
    if (n==0) return rev/10;
    else{
        rev = (rev + n%10)*10;
        reverse(n/10);
    }
}