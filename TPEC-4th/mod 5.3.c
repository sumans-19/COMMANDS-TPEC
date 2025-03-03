/* you only have to complete the function given below.  
node is defined as  

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

*/
struct node* insert(struct node* root, int data) {
    // If the root is NULL, create a new node with the given data
    if (root == NULL) {
        struct node* newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    // Otherwise, traverse the tree and insert the data
    if (data < root->data) {
        // Insert in the left subtree
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        // Insert in the right subtree
        root->right = insert(root->right, data);
    }

    // Return the root node (unchanged)
    return root;
}
