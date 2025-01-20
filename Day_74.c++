//Printing the Top View of a binary tree

//(5KYU)

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


  void topView(Node * root) {
        if(!root) return ;
// a map to store the first node at a particual Horizontal distance(HD)
        map<int , int> topNodes; 

// a queue with pair values of the node and horizontal distance for level order traversing
        queue<pair<Node*,int>> q;
        q.push({root, 0});
        
        while(!q.empty()){
            auto nodehd = q.front();
            Node * node = nodehd.first;
            
            int hd = nodehd.second;
             q.pop();
//// If no node has been recorded at this horizontal distance, add it
        if (topNodes.find(hd) == topNodes.end()) {
            topNodes[hd] = node->data;
        }
        // Add the children of the current node to the queue with their respective horizontal distances
        if(node->left){
            q.push({node->left, hd - 1});
        }
        if(node->right){
            q.push({node->right, hd + 1});
        }
    }
//print the top view nodes
        for (auto it : topNodes) {
        cout<<(it.second)<<" ";
        }
}
