#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    char str1[30];

    fgets(str1,sizeof(str1),stdin);

    str1[strcspn(str1,"\n")] = '\0';

    char rev[30];
    int i;

    for (i=strlen(str1)-1;i>=0;i--){
        rev[strlen(str1)-1-i] = str1[i];
    }
    rev[strlen(str1)] = '\0';

    // printf("%d %d",strlen(str1),strlen(rev));
    if (strcmp(rev,str1)==0) printf("Palindrome Strings\n");
    else printf("Not Palindrome Strings\n");
    // puts(str1);
    // puts(rev);

    return 0;
}

// after fgets use strcspn to put '\0' at the end of the 
// also put '\0' at the end of rev and don't use i as that would mean -1