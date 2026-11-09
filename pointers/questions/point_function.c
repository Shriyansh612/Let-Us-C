#include <stdio.h>
#include <math.h>

float distance(float,float,float,float);
float area(float,float,float,float,float,float);
int inside_triangle(float,float,float,float,float,float,float,float);

int main()
{
    float x1,x2,x3,y1,y2,y3;
    printf("Enter first point: ");
    scanf("%f %f",&x1,&y1);
    printf("Enter second point: ");
    scanf("%f %f",&x2,&y2);
    printf("Enter third point: ");
    scanf("%f %f",&x3,&y3);
    printf("Area of the triangle: %f\n",area(x1,y1,x2,y2,x3,y3));
    
    float x,y;
    printf("Enter a point: ");
    scanf("%f %f",&x,&y);
    if (inside_triangle(x1,y1,x2,y2,x3,y3,x,y)) printf("The point lies inside the triangle");
    else printf("The point lies outside of triangle");
    return 0;
}

float distance(float x1, float y1, float x2, float y2){
    float d = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return d;
}

float area(float x1, float y1, float x2, float y2, float x3, float y3){
    float a = distance(x1,y1,x2,y2);
    float b = distance(x2,y2,x3,y3);
    float c = distance(x3,y3,x1,y1);
    float s = (a+b+c)/2;
    float ar = sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}

int inside_triangle(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y){
    float a = area(x1,y1,x2,y2,x3,y3);
    float a1 = area(x2,y2,x3,y3,x,y);
    float a2 = area(x1,y1,x3,y3,x,y);
    float a3 = area(x2,y2,x1,y1,x,y);

    if (a<=a1 && a<=a2 && a<=a3)
        return 1;
    else
        return 0;        
}

