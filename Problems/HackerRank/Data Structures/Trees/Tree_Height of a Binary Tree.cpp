
/*The tree node has data, left child and right child
 struct node
 {
 int data;
 node* left;
 node* right;
 };
 
 */

int height(node * root)
{
    if (!root) return 0;
    
    if(!(root->left)&&!(root->right)) return 0;
    
    int l = height(root->left);
    int r = height(root->right);
    
    return l>r ? l+1 : r+1;
    
}


