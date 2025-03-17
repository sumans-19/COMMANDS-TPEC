#include <stdio.h>
#include <stdlib.h>

// Structure for a tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// Function to check if two trees are mirrors of each other
int areMirrors(struct Node* root1, struct Node* root2) {
    // If both trees are empty, they are mirrors
    if (root1 == NULL && root2 == NULL) {
        return 1;
    }

    // If only one of them is empty, they are not mirrors
    if (root1 == NULL || root2 == NULL) {
        return 0;
    }

    // Check if:
    // 1. The data of both nodes is the same
    // 2. The left subtree of root1 is a mirror of the right subtree of root2
    // 3. The right subtree of root1 is a mirror of the left subtree of root2
    return (root1->data == root2->data) &&
           areMirrors(root1->left, root2->right) &&
           areMirrors(root1->right, root2->left);
}

// Main function
int main() {
    // Creating first tree
    struct Node* root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left = newNode(6);
    root1->left->right = newNode(5);

    // Creating second tree (mirror of the first tree)
    struct Node* root2 = newNode(1);
    root2->left = newNode(3);
    root2->right = newNode(2);
    root2->right->left = newNode(5);
    root2->right->right = newNode(4);

    if (areMirrors(root1, root2)) {
        printf("The two trees are mirrors of each other.\n");
    } else {
        printf("The two trees are NOT mirrors of each other.\n");
    }

    return 0;
}
