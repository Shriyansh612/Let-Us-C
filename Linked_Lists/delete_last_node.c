#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};


struct node* delete_last_node(struct node* head){
    if (head==NULL){
        printf("List is already empty");
        return NULL;
    }
    else if (head->link == NULL){
        free(head);
        head = NULL;
        return NULL;
    }
    struct node *ptr = head;
    while (ptr->link->link!=NULL){
        ptr = ptr->link;
    }

    free(ptr->link);
    ptr->link = NULL;   //second last node ka link = NULL
    return head;
}

int main()
{
    
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 15;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 51;
    current->link = NULL;
    head->link->link = current;

    head = delete_last_node(head);
    
    current = head;
    while(current!=NULL){
        printf("%d ",current->data);
        current = current->link;
    }

    return 0;
}