#include <stdio.h>

int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
int (*getOperation(char op)) (int a,int b);
int calculate(int x,int y,int (*operation)(int a,int b));

int main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);

    char op;
    printf("Enter operation: ");
    scanf(" %c",&op);

    printf("Result: %d",calculate(x,y,getOperation(op)));
    return 0;
}

int add(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}

int (*getOperation(char op))(int a,int b){
    
    switch(op){
        case '+': return add;
        case '-': return subtract;
        case '*': return multiply;
        default: return NULL;                    
    }
}

int calculate(int x,int y,int (*operation)(int a,int b)){
    return operation(x,y);
}