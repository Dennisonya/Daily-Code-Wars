//Level Order tree traversal


//(5KYU) Level order
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


    void levelOrder(Node * root) {
        queue<Node* >q;
        vector<int>ans;
        
     q.push(root);
     while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        
        ans.push_back(curr -> data);
        
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
     }
    int* array = new int[ans.size()];
   for (size_t i = 0; i < ans.size(); i++) {
        array[i] = ans[i];
    }

    // Print the array
    for (size_t i = 0; i < ans.size(); i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

