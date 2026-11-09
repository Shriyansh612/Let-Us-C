//to print individual characters of string and then in reverse order

#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    printf("Enter your name: \n");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")] = '\0';
    //It scans your string from left to right looking for the \n character and returns its exact index position.
        
    printf("%d\n",strlen(name));

    for (int i=0;i<(int)strlen(name);i++){
        printf("%c\n",name[i]);
    }
    printf("\n");

    for (int i=(int)strlen(name)-1;i>=0;i--){
        printf("%c\n",name[i]);
    }


    return 0;
}