
#include <stdio.h>
#include <stdlib.h>

// Structure of a node
struct Node {
    int data;
    struct Node *next;
};

// Function declarations
struct Node* createList();
void traverse(struct Node *head);
struct Node* insertNode(struct Node *head, int data, int pos);
struct Node* deleteNode(struct Node *head, int key);
int searchNode(struct Node *head, int key);
struct Node* reverseList(struct Node *head);
struct Node* mergeList(struct Node *head1, struct Node *head2);
void freeList(struct Node *head);


// 1. CREATE LIST
struct Node* createList() {
    struct Node *head = NULL, *temp = NULL, *newNode;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        if (newNode == NULL) {
            printf("Memory allocation failed!\n");
            freeList(head);
            return NULL;
        }

        printf("Enter data: ");
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = newNode;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    return head;
}


// 2. TRAVERSE LIST
void traverse(struct Node *head) {
    struct Node *temp = head;

    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }

    printf("Linked List: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}


// 3. INSERTION AT A GIVEN POSITION
struct Node* insertNode(struct Node *head, int data, int pos) {
    struct Node *newNode, *temp = head;
    int i;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return head;
    }

    newNode->data = data;

    // Insertion at beginning
    if (pos == 1) {
        newNode->next = head;
        return newNode;
    }

    // Reach the previous node
    for (i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newNode);
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}


// 4. DELETION BY VALUE
struct Node* deleteNode(struct Node *head, int key) {
    struct Node *temp = head, *prev = NULL;

    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }

    // If first node contains the key
    if (head->data == key) {
        temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    // Search for the node
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Element not found!\n");
        return head;
    }

    prev->next = temp->next;
    free(temp);

    return head;
}


// 5. SEARCHING
int searchNode(struct Node *head, int key) {
    int pos = 1;

    while (head != NULL) {
        if (head->data == key)
            return pos;

        head = head->next;
        pos++;
    }

    return -1;
}


// 6. REVERSING THE LIST
struct Node* reverseList(struct Node *head) {
    struct Node *prev = NULL;
    struct Node *curr = head;
    struct Node *nextNode;

    while (curr != NULL) {
        nextNode = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextNode;
    }

    return prev;
}


// 7. MERGING TWO LISTS (CONCATENATION)
struct Node* mergeList(struct Node *head1, struct Node *head2) {

    if (head1 == NULL)
        return head2;

    if (head2 == NULL)
        return head1;

    struct Node *temp = head1;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = head2;

    return head1;
}


// FREE MEMORY
void freeList(struct Node *head) {
    struct Node *temp;

    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}


// MAIN FUNCTION
int main() {
    struct Node *head1 = NULL, *head2 = NULL;
    int choice, data, pos, result;

    do {
        printf("\n\n----- SINGLY LINKED LIST OPERATIONS -----\n");
        printf("1. Create List 1\n");
        printf("2. Traverse List 1\n");
        printf("3. Insert Node\n");
        printf("4. Delete Node\n");
        printf("5. Search Element\n");
        printf("6. Reverse List\n");
        printf("7. Create List 2\n");
        printf("8. Merge List 1 and List 2\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                freeList(head1);
                head1 = createList();
                break;

            case 2:
                traverse(head1);
                break;

            case 3:
                printf("Enter data and position: ");
                scanf("%d %d", &data, &pos);
                head1 = insertNode(head1, data, pos);
                break;

            case 4:
                printf("Enter element to delete: ");
                scanf("%d", &data);
                head1 = deleteNode(head1, data);
                break;

            case 5:
                printf("Enter element to search: ");
                scanf("%d", &data);

                result = searchNode(head1, data);

                if (result == -1)
                    printf("Element not found!\n");
                else
                    printf("Element found at position %d\n", result);

                break;

            case 6:
                head1 = reverseList(head1);
                printf("List reversed successfully!\n");
                break;

            case 7:
                freeList(head2);
                head2 = createList();
                break;

            case 8:
                head1 = mergeList(head1, head2);
                head2 = NULL;
                printf("Lists merged successfully!\n");
                break;

            case 9:
                freeList(head1);
                freeList(head2);
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 9);

    return 0;
}
