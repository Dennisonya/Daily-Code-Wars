//in order tree Traversal

//(7KYU) inOrder

#include <iostream>

class Node {
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

void inOrder(Node *root) {
         if(root== NULL)
            return;
        inOrder(root->left);
         std::cout<<root->data<<" ";
        inOrder(root->right);
    }