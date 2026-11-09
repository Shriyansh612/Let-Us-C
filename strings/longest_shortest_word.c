// 1. Longest and shortest word

// Input a sentence and find:
// - The longest word.
// - The shortest word.
// - Their respective lengths.

#include <stdio.h>
#include <string.h>

int main()
{   
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    int min=100,max=0,l=0;
    int min_word=0,max_word=0;

    for (int i=0;i<strlen(str);i++){
        if (str[i]==' '){
            // printf("%d\n",l);
            // printf("%d\n",max);
            // printf("%d\n\n",min);
            l=0;
            continue;
        }
        else l++;

        if (l>max && (str[i+1]==' ' || str[i+1]=='\0')){
            max=l;
            max_word = i-l+1;
        }
        if (l<min && (str[i+1]==' ' || str[i+1]=='\0')){
            min = l;
            min_word = i-l+1;
        }
    }

    printf("Longest Word: ");
    for (int i=0;i<max;i++) printf("%c",str[i+max_word]);
    printf("\nShortest Word: ");
    for (int i=0;i<min;i++) printf("%c",str[i+min_word]);

    return 0;
}