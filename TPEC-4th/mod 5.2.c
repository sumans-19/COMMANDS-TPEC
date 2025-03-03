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
