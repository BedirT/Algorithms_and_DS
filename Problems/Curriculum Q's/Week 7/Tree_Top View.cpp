/*
 struct node
 {
 int data;
 node* left;
 node* right;
 };
 
 */

void pre_order(node * root){
    
    if (!root) return;
    cout << root->data << " ";
    pre_order(root->right);
    
}

void post_order(node * root){
    
    if (!root) return;
    post_order(root->left);
    cout << root->data << " ";
}

void top_view (node * root){
    
    post_order(root);
    pre_order(root->right);
    
}


