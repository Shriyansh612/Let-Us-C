#include <stdio.h>

void hello(int *ptr){
    printf("%d",*(ptr+1));
    return;
}

int main()
{
    int arr[3] = {1,2,3};

    hello(arr);
    return 0;
}