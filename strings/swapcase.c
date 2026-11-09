#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    for (int i=0;i<strlen(str);i++){
        if (str[i]>=65 && str[i]<=90) str[i] = str[i]+32;
        else if (str[i]>=97 && str[i]<=123) str[i] = str[i]-32;
    }

    puts(str);

    return 0;
}