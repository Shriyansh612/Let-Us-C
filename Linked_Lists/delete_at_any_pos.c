#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
};

struct node* delete_at_any_pos(struct node* head,int pos){
    if (head==NULL){
        printf("List is already empty");
        return NULL;
    }
    else if (head->link == NULL){
        free(head);
        head = NULL;
        return NULL;
    }
    else{
        struct node *ptr = head;
        pos--;
        if (pos==0){
            struct node *temp = head;
            head = head->link;
            free(temp);
            temp = NULL;
            return head;
        }
        while (pos!=1){
            ptr = ptr->link;
            pos--;
        }
        
        struct node *temp = ptr->link->link;

        free(ptr->link);
        ptr->link = NULL;
        ptr->link = temp;
        temp = NULL;
        return head;
    }
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

    head = delete_at_any_pos(head,1);

    current = head;
    while (current!=NULL){
        printf("%d ",current->data);
        current = current->link;
    }

    return 0;
}