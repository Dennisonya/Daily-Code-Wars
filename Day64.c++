//Complete the PreORder  function in the editor below, 
//which has  parameter: a pointer to the root 
//of a binary tree. It must print the values 
//in the tree's preorder traversal as a single 
//line of space-separated values.

//(6kYU) PreOrder

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


    void preOrder(Node *root) {

        if(root == NULL)
            return;
        std::cout<<root->data<< " ";
        preOrder(root->left);
        preOrder(root->right);
    }



//Complete the  function in the editor below. 
//It received  parameter: a pointer to the root 
//of a binary tree. It must print the values in 
//the tree's postorder traversal as a single line 
//of space-separated values

//(6KYU) PostORder

 void postOrder(Node *root) {
        if(root== NULL)
            return;
        postOrder(root->left);
        postOrder(root->right);
        std::cout<<root->data<<" ";
    }