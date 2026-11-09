#include <stdio.h>

int main()
{
    int c=1,i,j,k;
    for (i=1;i<=4;i++)
    {
        for (j=4-i;j>0;j--)
            printf(" ");
        for (k=1;k<=i;k++)
            printf("%d ",c++); 
        printf("\n");            
    }               
    return 0;
}