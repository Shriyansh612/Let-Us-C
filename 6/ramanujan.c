#include <stdio.h>
#include <math.h>

int main()
{
    int flag=0,n=1,a,b,c,d;
    while (n>0){
        for (a=1;a<=(int)ceil(pow(n,1.0/3));a++){
            for (b=1;b<=(int)ceil(pow(n,1.0/3));b++){
                for (c=1;c<=(int)ceil(pow(n,1.0/3));c++){
                    for(d=1;d<=(int)ceil(pow(n,1.0/3));d++){
                        if (pow(a,3)+pow(b,3)==n && pow(c,3)+pow(d,3)==n && a!=c && a!=d){
                            printf("%d",n);
                            flag=1;
                            break;
                        }
                    }
                    if (flag==1)
                        break;
                }
                if (flag==1)
                    break;    
            } 
            if (flag==1)
                break;
        }
        if (flag==1)
            break;
        n++;            
    }

    return 0;
}