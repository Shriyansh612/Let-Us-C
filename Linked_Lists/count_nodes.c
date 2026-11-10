//traversing a single linked list 

//traversing a single linked list means visiting each node of a single linked list until the end node is reached

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head){
    int count = 0;
    if (head==NULL){
        printf("Linked list is empty");
        return;
    }

    struct node *ptr = NULL;
    ptr = head;
    //or directly struct node *ptr = head;

    while (ptr!=NULL){
        count++;
        ptr = ptr->link;
    }
    printf("No. of nodes: %d",count);
    return;
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

    count_of_nodes(head);

    return 0;
}

