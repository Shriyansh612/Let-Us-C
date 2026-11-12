#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* delete_first_node(struct node* head){
    if (head==NULL){
        printf("Linked List is already empty");
        return head;
    }
    struct node *temp = head;
    head = head->link;
    free(temp);
    temp = NULL;
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

    head = delete_first_node(head);

    current = head;
    while(current!=NULL){
        printf("%d ",current->data);
        current = current->link;
    }

    return 0;
}