/* you only have to complete the function given below.  
node is defined as  

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

*/
int getHeight(struct node* root) {
    // Base case: if root is NULL, height is -1 (for an empty tree)
    if (root == NULL) {
        return -1;
    }

    // Recursively find the height of left and right subtrees
    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    // Return the height of the tree as 1 + the maximum of left and right heights
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}



or 




int getHeight(struct node* root) {
    // If the tree is empty, return -1 as its height
    if (root == NULL) {
        return -1;
    }

    // Initialize counters for the left and right subtrees
    int leftHeight = 0;
    int rightHeight = 0;

    // Recursively find the height of the left and right subtrees
    if (root->left != NULL) {
        leftHeight = 1 + getHeight(root->left); // Increment counter for left subtree
    }
    if (root->right != NULL) {
        rightHeight = 1 + getHeight(root->right); // Increment counter for right subtree
    }

    // Return the height of the tree as the maximum height between left and right subtrees
    // Adding 1 accounts for the current root node
    return (leftHeight > rightHeight) ? leftHeight : rightHeight;
}

