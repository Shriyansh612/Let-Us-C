#include <stdio.h>
#include <string.h>

void input(char str[],int n){
    int ch,i=0;
    while((ch=getchar()) != '\n'){
        if (i<n-1)
        str[i++] = ch;
    }
    str[i]='\0';
    return ;
}

int length(char name[]){
    int i=0;
    while(name[i]!='\0'){
        i++;
    }
    return i;
}

int main()
{
    char name[30];

    input(name,sizeof(name));

    int l = length(name);
    printf("%d\n",l);

    int len = strlen(name);
    printf("%d",len);
    return 0;
}