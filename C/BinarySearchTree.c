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
    struct Node *leftNode;
    struct Node *rightNode;
} NODE;

// Function createNode() will create nodes
NODE *createNode(int num,int key) {
    NODE* result = malloc(sizeof(NODE));
    if(result!=NULL) {
        result->data = num;
        result->leftNode = NULL;
        result->rightNode = NULL;
    }
    return result;
}

// Factorial() will calculate the factorial of a given number
// Should function the same as in java
int factorial(int num) {
    int fact = 1;
    if(num == 0) {
        return 1;
    } else {
        while(num > 1) {
            fact = fact * num;
            num--;
        }
        return fact;
    }
}

// Represent the root of binary tree
NODE *root;
void BinarySearchTree() {
    root = NULL;
}

// numOfBST() calculates the total number of possible BST by calculating Catalan # 
int numOfBST(int key) {
    int catalanNumber = factorial(2*key)/(factorial(key+1)*factorial(key));
    return catalanNumber;
}

int main() {
    // Display total number of possible binary search tree with key 5
    printf("Total number of possible Binary Search Trees with given key: %d \n" , numOfBST(5));
    return 0;
}
