#include<queue>

/*
 struct node
 {
 int data;
 node* left;
 node* right;
 }*/

void LevelOrder(node * root){
    
    queue<node*> qNode;
    qNode.push(root);
    while (!qNode.empty()) {
        cout << qNode.front()->data << " ";
        if(qNode.front()->left)  qNode.push(qNode.front()->left);
        if(qNode.front()->right) qNode.push(qNode.front()->right);
        qNode.pop();
    }
    
}