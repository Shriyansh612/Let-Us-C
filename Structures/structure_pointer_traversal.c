// 3. Structure Pointer Traversal

// Create an array of 5 structures called Student, containing:
// - Roll number
// - Name
// - Marks

// Tasks:
// 1. Traverse the array using a structure pointer.
// 2. Find the student with maximum marks.
// Constraint: Use pointer arithmetic instead of student[i].

#include <stdio.h>

struct Student{
    int roll_no;
    char name[30];
    int marks;
};

int main()
{
    struct Student arr[5] = {{1,"Shriyansh",70},{2,"Raghu",79},{3,"Priyanshu",88},{4,"Mannu",66},{5,"Arth",33}};

    int top_student=0;
    struct Student *ptr = &arr[0];

    for (int i=0;i<5;i++){
        if (((ptr+i)->marks) > (ptr+top_student)->marks){
            top_student = i;
        }
    }

    printf("Student with highest marks: \n");
    printf("Roll Number: %d\n",(ptr+top_student)->roll_no);
    printf("Name: %s\n",(ptr+top_student)->name);
    printf("Marks: %d\n",(ptr+top_student)->marks);

    return 0;
}