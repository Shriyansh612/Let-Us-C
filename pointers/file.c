#include<stdio.h>

int main(){

    int a = 10;
    int *ptr;       //  * = dereferencing operator
    ptr=&a;  // pointer = address of a
    printf("%d\n",ptr);     //prints address of a
    printf("%d\n",*ptr);     //prints value of a


    *ptr = 200;  // value at pointer(memory address) stores 200 (a=200)
    printf("%d\n",a);     // value of a gets changed 
    printf("%d\n",ptr);  //same memory address to which pointer points to

    int **doubleptr = &ptr;   //stores address of pointer
    printf("%d\n",doubleptr);   //prints address of pointer
    printf("%d\n",*doubleptr);   //prints address of a
    printf("%d\n",**doubleptr);   //prints value of a

    return 0; 
}