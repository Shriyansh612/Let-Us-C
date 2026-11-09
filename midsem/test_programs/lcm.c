#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    int lcm=1;

    for (int i=1;i<=a*b;i++){
        if (i%a==0 && i%b==0){
            lcm = i;
            break;
        }
    }

    printf("LCM: %d",lcm);

    return 0;
}