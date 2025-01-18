//Insertion of node in Binary tree

//(6KYU) Insertion

#include <its/stdc++.h>
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

   Node * insert(Node * root, int data) {
        if(root == NULL){
           return new Node(data);
        }
 else if(data <= root->data){
      root->left=insert(root->left,data);
  }
  else{
     root->right=insert(root->right,data); 
  }
    return root;
}