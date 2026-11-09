#include <stdio.h>

int main()
{
    int n,c1=0,c2=0,c3=0,c4=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        if (i%3==0 && i%5==0)
            c1++;
        else if (i%3==0)
            c2++;
        else if (i%5==0)
            c3++;
        else
            c4++;                                    
    }

    printf("Divisible by both 3 and 5: %d\n",c1);
    printf("Divisible by only 3: %d\n",c2);
    printf("Divisible by only 5: %d\n",c3);
    printf("Divisible by neither of them: %d\n",c4);
    return 0;
}