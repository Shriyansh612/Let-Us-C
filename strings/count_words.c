#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100];
    fgets(sentence,sizeof sentence,stdin);
    sentence[strcspn(sentence,"\n")] = '\0';

    int l = strlen(sentence);
    int words=0;

    if (l>0){
        if (sentence[0]!=' ' && sentence[0]!='\n' && sentence[0]!='\t')
            words++;

        for (int i=0;i<l-1;i++){
            if (sentence[i]==' ' && sentence[i+1]!=' ')
                words++;
        }
    }

    printf("No. of words in the sentence: %d\n",words);

    return 0;
}