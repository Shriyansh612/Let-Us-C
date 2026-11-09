#include <stdio.h>

int gcd(int a,int b);

int main()
{
    int j,k;
    printf("Enter two numbers: ");
    scanf("%d %d",&j,&k);
    printf("GCD: %d",gcd(j,k));

    return 0;
}

int gcd(int a,int b){
    int n = a,m = b,c;
    if (a>b){
        while(m>0){
            c = m ;
            m = n-(n/m)*m;
            n = c;
        }
        return n;
    }
    else{
        while(n>0){
            c=n;
            n=m-(m/n)*n;
            m=c;
        }
        return m;
    }
}