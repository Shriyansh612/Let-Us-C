// 5. Nested Structure – Date of Birth
// Create two structures:
// - Date: day, month, year
// - Student: roll number, name, date of birth
// Tasks:
// 1. Input details of N students.
// 2. Display students born in a particular year.
// 3. Find the oldest student.
// 4. Sort students according to their date of birth

#include <stdio.h>

struct Date{
    int day;
    int month;
    int year;
};
struct Student{
    int roll_no;
    char name[30];
    struct Date date_of_birth;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);

    struct Student arr[n];
    
    for (int i=0;i<n;i++){
        printf("Enter roll number: ");
        scanf("%d",&arr[i].roll_no);
        printf("Enter name: ");
        scanf("%s",arr[i].name);
        printf("Enter day: ");
        scanf("%d",&arr[i].date_of_birth.day);        
        printf("Enter month: ");
        scanf("%d",&arr[i].date_of_birth.month);        
        printf("Enter year: ");
        scanf("%d",&arr[i].date_of_birth.year);
    }

    int year;
    printf("Enter year: ");
    scanf("%d",&year);

    int c1=0;

    for (int i=0;i<n;i++){
        if (arr[i].date_of_birth.year==year){
            printf("Roll No: %d\n",arr[i].roll_no);
            printf("Name: %s\n",arr[i].name);
            printf("Date of Birth %d-%d-%d\n\n",arr[i].date_of_birth.day,arr[i].date_of_birth.month,arr[i].date_of_birth.year);
            c1++;
        }
    }
    if (c1==0) printf("Not Found\n");

    // int oldest=0,max_age=arr[0].date_of_birth.year;
    // for (int i=0;i<n;i++){
    //     if (arr[i].date_of_birth.year<max_age){
    //         oldest = i;
    //         max_age = arr[i].date_of_birth.year;
    //     }
    // }

    // printf("Oldest:\n");
    // printf("Roll No: %d\n",arr[oldest].roll_no);
    // printf("Name: %s\n",arr[oldest].name);

    struct Student temp;
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j+1].date_of_birth.year>arr[j].date_of_birth.year){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
            if (arr[j+1].date_of_birth.year==arr[j].date_of_birth.year){
                if (arr[j+1].date_of_birth.month>arr[j].date_of_birth.month){
                    temp = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = temp;
                }
                if (arr[j+1].date_of_birth.month == arr[j].date_of_birth.month){
                    if (arr[j+1].date_of_birth.day > arr[j].date_of_birth.day){
                        temp = arr[j+1];
                        arr[j+1] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
        }
    }

    printf("Oldest:\n");
    printf("Roll No: %d\n",arr[n-1].roll_no);
    printf("Name: %s\n\n",arr[n-1].name);
    
    printf("Sorted:\n");
    for (int i=0;i<n;i++){
        printf("Name: %s\n",arr[i].name);
    }


    return 0;
}