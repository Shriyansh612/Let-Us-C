#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* reverse_list(struct node *head){
    struct node *prev = NULL;
    struct node *next = NULL;
    while (head!=NULL){
        next = head->link;
        head->link = prev;
        prev = head;
        head = next;
    }
    head = prev;
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

    head = reverse_list(head);

    current = head;
    while (current!=NULL){
        printf("%d ",current->data);
        current = current->link;
    }

    return 0;
}