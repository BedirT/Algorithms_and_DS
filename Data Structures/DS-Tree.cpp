#include<iostream>
using namespace std;

struct Node{
    int data;
    Node * left;
    Node * right;
};

Node * makeNewNode(int newwData){ // Creating new node
    
    Node * newNode = new Node();
    //(*newNode).data = newwData;
    newNode->data = newwData;
    newNode->left = newNode->right = NULL;
    return newNode;
    
}

Node * insert(Node * parent , int add){ // Inserting Data
    
    if (parent == NULL)
        parent = makeNewNode(add);
    
    else if(add >= parent->data)
        parent->left = insert(parent->left, add);
    
    else
        parent->right = insert(parent->right, add);
    
    return parent;
    
}

bool search(Node * parent, int key){ // Searching Data
    if(parent == NULL)              return false;
    else if(parent->data == key)    return true;
    else if(parent->data <= key)    return search(parent->left, key);
    else                            return search(parent->right, key);
}

void printTree(Node *root) { // Printing the Tree
    cout << root->data << " ";
    if(root->left != NULL)  printTree(root->left);
    if(root->right != NULL) printTree(root->right);
}

int main () {
    
    int a, n;
    Node * root;
    root = NULL;
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> a;
        root = insert(root, a);
    }
    
    printTree(root);
    
}
