https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/883623812/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
   
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s;
        if(root)s.push(root);

        while(!s.empty()){
            TreeNode*temp=s.top();
            ans.push_back(temp->val);
            s.pop();
            if(temp->right){
                s.push(temp->right);
                temp->right=NULL;
            }
            if(temp->left){
                s.push(temp->left);
                temp->left=NULL;

            }
        }
       
        return ans;
    }
};
