// #include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter a positive number: ");
//     scanf("%d",&n);
//     char res[8];

//     int temp = 0;
//     int j = 7;

//     for (int i=0;i<32;i++){
//         if (i%4==0)
//             temp = 0;
//         if (n&(1<<i))
//             temp |= 1<<(i%4);
                       
//         if (i%4==3){

//             // printf("Temp: %d\n",temp);
//             if (temp<=9)
//                 res[j--] = '0'+temp;
//             else
//                 res[j--] = 'A'+temp-10;
//         }                                        
//     }

//     printf("Hexadecimal Value: %s\n",res);
//     for (int i=0;i<8;i++)
//         printf("%c",res[i]);

//     // if(temp <= 9) res[j++] = '0' + temp;
//     // else res[j++] = 'A' + temp - 10; 

//     return 0;
// }


#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    char str[8]="00000000";
    int temp=0,j=7;

    while(n>0){
        if (n%16<=9)
            str[j--] = '0'+(n%16);
        else
            str[j--] = 'A'-10+(n%16); 
        n=n/16;                       
    }

    for (int i=0;i<8;i++)
        printf("%c",str[i]);


    return 0;
}