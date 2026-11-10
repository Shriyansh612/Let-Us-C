#include <stdio.h>
#include <stdlib.h>

struct node{        //self referential structure
    int data;
    struct node *link;  //pointer to this structure type
};

//GENERAL
// struct Node{
//     data_type member1;
//     data_type member2;
//     ..
//     ..
//     struct node *link;
// };

int main()
{
    struct node *head = NULL;   //points to first node
    
    head = (struct node*)malloc(sizeof(struct node));   //type casting void pointer to struct node pointer

    head->data = 45;    //arrow reference operator
    //similar to (*head).data
    head->link = NULL;

    printf("%d",head->data);

    return 0;
}