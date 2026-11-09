#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter lengths of 3 sides of a triangle: ");
    scanf("%d %d %d",&a,&b,&c);

    if (a+b<=c || b+c<=a || a+c<=b)
        printf("Not a valid triangle");
    else
        if (a==b && b==c)
            printf("Equilateral Triangle");
        else if (a==b || b==c || c==a)
            printf("Isosceles Triangle");
        else    
            printf("Scalene Triangle");                        

    return 0;
}