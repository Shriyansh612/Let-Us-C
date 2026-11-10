#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

void insert_at_end(struct node *head,int data){
    struct node *temp = malloc(sizeof(struct node));
    struct node *ptr = head;

    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }

    ptr->link = temp;
    printf("%d",ptr->link->data);
    return;
}

int main()
{
    
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    insert_at_end(head,144);

    return 0;
}