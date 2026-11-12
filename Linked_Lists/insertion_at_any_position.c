#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* add_at_pos (struct node* head,int data,int pos){
    struct node* new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->link = NULL;

    struct node *ptr = head;
    pos--;

    if (pos==0){
        new_node->link = head;
        return new_node;
    }

    while(pos!=1){
        ptr = ptr->link;
        pos--;
    }
    new_node->link = ptr->link;
    ptr->link = new_node;
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

    head = add_at_pos(head,451,2);

    current = head; 
    while(current!=NULL){
        printf("%d ",current->data);
        current = current->link; 
    }

    return 0;
}