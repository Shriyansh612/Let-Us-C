#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

//time complexity O(1)
struct node* insert_at_end(struct node *ptr,int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}

int main()
{
    struct node* head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = head;    
    //here current pointer will always point towards the last node of the linked list
    current = insert_at_end(current,51);
    current = insert_at_end(current,562);
    current = insert_at_end(current,90);
    
    current = head;
    while (current!=NULL){
        printf("%d ",current->data);
        current = current->link;
    }

    return 0;
}