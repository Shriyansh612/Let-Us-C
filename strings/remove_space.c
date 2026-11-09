#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    char result[30];
    int p=0;
    for (int i=0;i<strlen(str);i++){
        if (str[i]!=' ') result[p++] = str[i];
    }
    result[p] = '\0';

    puts(result);

    return 0;
}