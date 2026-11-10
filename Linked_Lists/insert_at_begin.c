#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* insert_at_begin(struct node* head,int data){
    struct node* ptr = malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = head;
    head = ptr;
    return head;
}

int main()
{
    struct node* head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node* current = malloc(sizeof(struct node));
    current->data = 15;
    current->link = NULL;
    head->link = current;

    head = insert_at_begin(head,151);
    current = head;

    while(current!=NULL){
        printf("%d ",current->data);
        current = current->link;
    }

    return 0;
}