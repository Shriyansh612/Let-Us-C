#include <stdio.h>

int main()
{
    int numbers[3] = {10,20,30};
    int *arr_ptr = numbers;     //stores address of first element of array
    int *arr_ptr2 = &numbers[1];    //stores address of second element of array

    printf("First Element: %d\n",numbers[0]);  //prints first element of array
    printf("First Element: %d\n",*arr_ptr);    //prints value at address which is stored in arr_ptr which is first element of array  
    printf("Second Element: %d\n",*(arr_ptr+1));  // arr_ptr + 1 means next memory location which is 4 bytes away and is 2nd element of array
    printf("Second Element: %d\n",*arr_ptr2);     // prints value at address stored in arr_ptr2 (address of second element of array) and hence prints 2nd element of the array

    printf("Address of 1st element: %d\n",arr_ptr); //arr_ptr stores the address of 1st element
    printf("Address of 2nd element: %d\n",arr_ptr+1);  // arr_ptr+1 corresponds to next memory location which is 4 bytes away
    printf("Address of 2nd element: %d\n",arr_ptr2);   // arr_ptr2 stores the address of 2nd element

    return 0;
}