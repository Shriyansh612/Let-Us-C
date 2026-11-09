#include <stdio.h>

int main()
{
    int i = 0,j=2;
    start:
    while (i<7){
        i++;
        if (i==2 && j--)
            continue;
        if (i==5 && j--)
            break;
        if (i==3 && j--){
            printf("%d %d ",i,j);
            goto skip;
        }    
        printf("%d %d ",i,j);                    
    }
    skip:
    printf("End\n");
    return 0;
}

