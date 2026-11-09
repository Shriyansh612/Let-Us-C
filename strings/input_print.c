#include <stdio.h>

void input(char str[],int n);

int main()
{
    // char str[] = "Hello";
    // char str1[6] = "Hello";
    // char str2[6] = {'H','e','l','l','o','\0'};
    
    // printf("%s\n",str);
    // puts(str1);
    
    // int i=0;
    // while(str2[i]!='\0'){
    //     printf("%c",str2[i]);
    //     i++;
    // }
    // printf("\n");

    // char name[30];
    // scanf("%s",name); //no ampersand as name is already the base address
                         //stops after encountering whitespace character
    // puts(name);

    // gets(name);          //it is dangerous(it does not limit input length, we can enter string longer than array size due to which memory is overwritten)

    // puts(name);

    // printf("Enter your full name: \n");
    // fgets(name,sizeof(name),stdin);     //best for input but but input buffer has to be cleaned
    // puts(name);     //extra newline
    // printf("%s",name);

    // input(name,sizeof(name));
    // printf("%s",name);
    
    //putchar() function

    for (int i='A';i<='Z';i++){
        putchar(i);
    }
    
    return 0;
}
//custom input function

void input(char str[],int n){
    int ch,i=0;
    while((ch=getchar()) != '\n'){
        if (i<n-1)
        str[i++] = ch;
    }
    str[i]='\0';
    return ;
}