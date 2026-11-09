#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[] = "Python Programming";
    char *str2=(char *)malloc(6*sizeof(char));
    // strcpy(str2,str1);

    // puts(str2);
    // printf("%s\n",str2);

    strncpy(str2,str1,5);
    str2[5] = '\0';
    puts(str2);
    free(str2);
    return 0;
}