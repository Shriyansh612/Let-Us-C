#include <stdio.h>

int main()
{
    int amount,note1,note5,note10,note20;
    printf("Enter a dollar amount: ");
    scanf("%d",&amount);

    note20 = amount/20;
    amount = amount%20;

    note10 = amount/10;
    amount = amount%10;

    note5 = amount/5;
    amount = amount%5;

    note1 = amount;
    
    printf("%d x $20 notes, %d x $10 notes, %d x $5 notes, %d x $1 notes",note20,note10,note5,note1);


    return 0;
}