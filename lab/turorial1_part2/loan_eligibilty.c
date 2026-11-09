#include <stdio.h>

int main()
{
    int age,credit_score;
    float amount,monthly_income;
    int rate=0;
    
    printf("Enter your age: \n");
    
    printf("Enter credit score: \n");
    
    printf("Enter amount requested for loan: \n");

    printf("Enter monthly income: \n");
    scanf("%d %d %f %f",&age,&credit_score,&amount,&monthly_income);

    if (age<21 || age>60)
        printf("Not Eligible\n");
    else{
        if (credit_score>=750){
            printf("Eligible at 8%% rate\n");
            rate = 8;
        }
        else if (650<=credit_score<=749){
            printf("Eligible at 12%% rate\n");
            rate = 12;
        }
        else if (500<=credit_score<=649){
            printf("Eligible at 16%% rate\n");
            rate = 16;
        }
        else{
            printf("Not eligible\n");
            rate = 0;
        }
    }
    
    if (rate>0){
        printf("Premium after one year: %.2f\n",amount*rate/100);
        if (12*monthly_income>=amount+amount*rate/100)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}