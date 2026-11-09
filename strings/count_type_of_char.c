//Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    int c1=0,c2=0,c3=0,l=strlen(str);
    for (int i=0;i<l;i++){
        if ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=123))
            c1++;
        else if ((str[i]>=48 && str[i]<=57))
            c2++;
        else c3++;
    }

    printf("Alphabets: %d\n",c1);
    printf("Digits: %d\n",c2);
    printf("Special Characters: %d\n",c3);
    
    return 0;
}