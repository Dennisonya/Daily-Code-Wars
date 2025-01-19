//Insertion of node in Binary tree

//(6KYU) Insertion



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