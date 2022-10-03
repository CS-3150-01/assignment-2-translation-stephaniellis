/* 
Name: Stephanie Ellis
Class: CS-3150
Assignment: Assignment 2: Translation
*/
#include <stdio.h>
#include <stdlib.h>

// Define Node
typedef struct Node {
    int data;
    struct Node *next;
} NODE;

// createNode() will create node?
NODE *createNode(int num) {

    NODE* result = malloc(sizeof(NODE));

    if(result!=NULL) {
        result->data = num;
        result->next = NULL;
    }

    return result;
}

// Represent the head and tail of the singly linked list
NODE *head;
NODE *tail;

// addNode() will add a new node to the list
void addNode(int data) {
    // Create a new node
    NODE* childNode = createNode(data);
    // Check if list is empty
    if(head == NULL) {
        head = childNode;
        tail = childNode;
    } else {
        tail -> next = childNode;
        tail = childNode;
    }
}

// display() will display all nodes present in list
void display() {
    // Node current will point to head
    NODE* current = head;

    if(head == NULL) {
        printf("List is empty");
        return;
    }
    printf("Nodes of singly linked list: ");
    while(current != NULL) {
        printf("%i \n", current -> data);
        current = current -> next;
    }
    printf("\n");
}
 
int main() {
    // add nodes to list
    // display nodes
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);

    display();
    return 0;
}