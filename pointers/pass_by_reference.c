#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a,b;
    printf("Please enter a and b, I am begging you: ");
    scanf("%d %d",&a,&b);

    swap(&a,&b);        // passing references of a and b


    //since the values are altered in the memory addresses, the original values of variables a and b gets changed
    printf("New value of a: %d\n",a);
    printf("New value of b: %d\n",b);

    return 0;
}
void swap(int *u,int *v){   
    int dustbin = *v;       //temporary variable stores the value stored in v(b)
    *v=*u;          // value at address v(address of b) = value at address u(address of a)
    *u = dustbin;   // value at address u(address of a) = value of b
    return;
}