#include <stdio.h>
#include <stdlib.h>

// Structure for a BST node
struct Node {
    int data;
    struct Node *left, *right;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Utility function to check for dead ends
int isDeadEndUtil(struct Node* root, int min, int max) {
    if (root == NULL) return 0;

    // If min == max, we've found a dead end
    if (min == max) return 1;

    // Recursively check in left and right subtrees
    return isDeadEndUtil(root->left, min, root->data - 1) ||
           isDeadEndUtil(root->right, root->data + 1, max);
}

// Function to check if BST contains a dead end
int containsDeadEnd(struct Node* root) {
    return isDeadEndUtil(root, 1, INT_MAX);
}

// Main function to test the program
int main() {
    struct Node* root = newNode(8);
    root->left = newNode(5);
    root->right = newNode(11);
    root->left->left = newNode(2);
    root->left->right = newNode(7);
    root->left->left->left = newNode(1);

    if (containsDeadEnd(root))
        printf("BST contains a dead end.\n");
    else
        printf("BST does NOT contain a dead end.\n");

    return 0;
}
