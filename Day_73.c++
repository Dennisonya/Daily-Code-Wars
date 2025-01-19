//Find the Lowest common ancestor given the root and two nodes v1 and v2
//(6KYU) Lowest Common Ancestor

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

 Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        if(!root)
            return nullptr;
            
        if(root->data== v1 || root->data == v2){
            return root;
        }
        
        Node* leftLca = lca(root->left, v1, v2);
        Node* rightLca = lca(root->right, v1, v2);
        
        if(leftLca && rightLca){
            return root;
        }
        
        return leftLca ? leftLca :rightLca;
    }
