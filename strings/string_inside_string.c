// Q15. Check whether a string contains another string

// Use strstr() to check whether a substring exists inside a main string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';
    
    printf("Enter target string: ");
    char target[30];
    fgets(target,sizeof(target),stdin);
    target[strcspn(target,"\n")] = '\0';

    char *result = strstr(str,target);

    if (result!=NULL){
        printf("Found at %d",result-str);
    }
    else printf("Not found");
    return 0;


    // int l1=strlen(str), l2 = strlen(target);

    // int flag=0;

    // for (int i=0;i<l1-l2+1;i++){
    //     for (int j=0;j<l2;j++){
    //         if (str[i+j]==target[j]) flag++;
    //     }
    //     if (flag==l2){
    //         printf("Found");
    //         return 0;
    //     }
    //     flag=0;
    // }

    // printf("Not found");


    // return 1;
}