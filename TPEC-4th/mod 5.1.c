/* you only have to complete the function given below.  
node is defined as  

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

*/
struct node *lca(struct node *root, int v1, int v2) {
    // Base case: if root is NULL, return NULL
    if (root == NULL) {
        return NULL;
    }

    // If both v1 and v2 are smaller than root, then LCA lies in the left subtree
    if (root->data > v1 && root->data > v2) {
        return lca(root->left, v1, v2);
    }

    // If both v1 and v2 are greater than root, then LCA lies in the right subtree
    if (root->data < v1 && root->data < v2) {
        return lca(root->right, v1, v2);
    }

    // If we are here, then root is the LCA because one value is on one side, and the other is on the other side, or one of the values matches the root.
    return root;
}
