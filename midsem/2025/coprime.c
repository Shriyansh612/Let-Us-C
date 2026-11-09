// #include <stdio.h>

// int main()
// {
//     int n,m;
//     scanf("%d %d",&m,&n);

//     if (n%m==0 || m%n==0)
//         printf("Not Comprime");
//     else
//         printf("Coprime");        

//     return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int hcf = 1;
    for (int i=1;i<=fmin(m,n);i++){
        if (m%i==0 && n%i==0)
            hcf = i;
    }
    printf("%d\n",hcf);
    if (hcf==1)
        printf("Coprime");
    else
        printf("Not coprime");
                
    
    return 0;
}