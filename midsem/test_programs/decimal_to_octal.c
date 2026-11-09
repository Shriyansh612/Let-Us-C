#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    char str[11];
    int temp=0,c=10;

    for (int i=0;i<33;i++){
        if (i%3==0)
            temp = 0;
        
        if (n&(1<<i))
            temp |= 1<<(i%3);
        
        if (i%3==2)
            str[c--] = '0'+temp;            
    }

    for (int i=0;i<11;i++)
        printf("%c",str[i]);

    return 0;
}