#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matchstick = 0;
    int c1 = 0;

    while (matchstick<=21){
        printf("\nEnter number between 1 and 4: ");
        scanf("%d",&c1);
        matchstick+=c1;
        
        if (matchstick>=16 && matchstick<=19){
            matchstick = 20;
        }
        else if (matchstick<21){
            matchstick += (rand()%4)+1;
        }
        printf("\nMatchstick: %d",matchstick);
        if (matchstick>=21){
            printf("\nGame over");
            break;
        }
    }

    return 0;
}