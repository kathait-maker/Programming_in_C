//Write a program to insert item in middle of the linked list.


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    // Create 3 simple nodes
    struct Node *head = NULL, *second = NULL, *third = NULL, *newNode = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Create new node to insert at position 2 (middle)
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 15;

    // Insert new node between head and second
    newNode->next = head->next;
    head->next = newNode;

    // Print linked list
    struct Node *temp = head;
    printf("Updated Linked List: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
