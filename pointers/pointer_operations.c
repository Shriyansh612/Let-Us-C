#include <stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};
    int *ptr = arr;

    printf("%d\n",*ptr);        //first element of array
    printf("%d\n",*(ptr+1));    //second element of array, ptr+1 makes it go 4 bytes forward
    printf("%d\n",*ptr+1);      //first element + 1 = 11
    printf("%d\n",*ptr++);      //++ has more priority than *, first element but ptr now stores address of second element
    printf("%d\n",*(++ptr));    //ptr points to third element, prints third element of array
    printf("%d\n",++(*(ptr)));  //third array element is exceeded by 1
    printf("%d\n",*++ptr);      //++ has more priority, so pointer points to 4th element
    printf("%d\n",*(ptr)++);    //prints fourth element, then pointer exceeds by 1, 5th element
    printf("%d\n",ptr);         //prints address of 5th element
    printf("%d\n",*(++ptr));      //prints 6th element
    printf("%d\n",*(++ptr));      //prints 7th element
    printf("%d\n",*(++ptr));      //prints 7th element

    return 0;
}