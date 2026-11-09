#include <stdio.h>

void Average(int x,int y,int z,int max,float *avg,float *per);

int main()
{
    int a,b,c,max;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d",&a,&b,&c);

    printf("Enter maximum marks that can be obtained: ");
    scanf("%d",&max);

    if (a>max || b>max || c>max || a<0 || b<0 ||c<0){
        printf("Incorrect Input");
        return 0;
    }
    
    float average=0.0f,percentage=0.0f;
    Average(a,b,c,max,&average,&percentage);

    printf("Average: %f\n",average);
    printf("Percentage: %f\n",percentage);
    
    return 0;
}

void Average(int x,int y,int z,int max,float *avg,float *per){
    *avg = (x+y+z)/3.0;
    *per = (x+y+z)/(3.0*max)*100;
    return;
}