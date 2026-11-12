#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* delete_list(struct node* head){
    struct node *temp = head;
    while (head != NULL){
        temp = temp->link;
        free(head);
        head = temp;
    }
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

    head = delete_list(head);

    if (head==NULL){
        printf("Linked list deleted succesfully");
    }

    return 0;
}