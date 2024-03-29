https://www.hackerrank.com/challenges/tree-level-order-traversal/problem?isFullScreen=true


#include <bits/stdc++.h>	

using namespace std;

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

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*
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
*/

    void levelOrder(Node * root) {
     vector<int>ans;      
     queue<Node*>q;
     
     if(root)q.push(root);
     
     while(!q.empty()){
         Node*temp=q.front();
         cout<<temp->data<<" ";
         q.pop();
        if(temp->left)
            q.push(temp->left);
            
        if(temp->right)
            q.push(temp->right);
        
        }
     
    }

}; //End of Solution
