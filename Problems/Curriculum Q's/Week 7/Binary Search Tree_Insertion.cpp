/*
 Node is defined as
 
 typedef struct node
 {
 int data;
 node * left;
 node * right;
 }node;
 
 */

node * createNewNode(int val){
    node * newNode = new node();
    newNode -> data = val;
    newNode -> right =  newNode -> left = NULL;
    return newNode;
}

node * insert(node * root, int value)
{
    if(!root)                       root = createNewNode(value);
    else if(value >= root->data)    root -> right = insert(root->right, value);
    else                            root -> left = insert(root->left, value);
    return root;
}

