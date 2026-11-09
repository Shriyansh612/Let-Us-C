#include <stdio.h>
#include <string.h>

int xstrcmp(const char str1[],const char str2[]){
    int i=0;
    while(str1[i]!='\0' && str2[i]!='\0'){
        if (str1[i]<str2[i]) return -1;
        if (str1[i]>str2[i]) return 1;
        i++;
    }
    
    // Check characters at index i to catch mismatched lengths (e.g., "apple" vs "apples")
    if (str1[i] < str2[i]) return -1;
    if (str1[i] > str2[i]) return 1;
    
    return 0;
}

int xstrcmp2(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main()
{
    char str1[] = "Tello";
    char str2[] = "Tello";

    printf("%d\n",strcmp(str1,str2));

    printf("%d\n",xstrcmp(str1,str2));
    printf("%d\n",xstrcmp2(str1,str2));

    return 0;
}