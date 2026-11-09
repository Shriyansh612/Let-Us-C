// Input a string and a character. Find the first and last occurrence using strchr() and strrchr()

#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    char target;
    printf("Enter character target: ");
    scanf(" %c",&target);

    char *result = strchr(str,target);
    char *result2 = strrchr(str,target);

    if (result!=NULL) {
        printf("First Occurence: %d\n",result-str);
        printf("Last Occurence: %d",result2-str);
    }
    else    printf("Not found");


    return 0;
}