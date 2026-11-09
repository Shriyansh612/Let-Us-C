// 2. String compression

// Compress consecutive repeating characters.

// Example:
// Input:  aaabbccccddaa
// Output: a3b2c4d2a2

#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    // char result[60];
    // result[0] = str[0];
    // printf("%c",str[0]);
    // int p=1;
    int count = 1;
    for (int i=1;i<strlen(str);i++){
        if (str[i]==str[i-1]){
            count++;
        }
        if (str[i]!=str[i-1] || i==strlen(str)-1){
            printf("%c",str[i-1]);
            printf("%d",count);
            count = 1;
        }
    }

    return 0;
}