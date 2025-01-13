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


    //Find the height of a binary Tree

    int height(Node* root) {
        // Write your code here.
        int a,b,h;
         if(root== NULL)
            return -1;
        a = height(root->left);
        b = height(root->right);
        if(a>b){
            h =a +1;
        }else {
            h = b+1;
        }
        return h;
    }