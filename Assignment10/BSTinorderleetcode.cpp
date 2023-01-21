https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/881025459/


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
   void recurseInorder(TreeNode*root,vector<int>&ans){
       if(!root) return;
       recurseInorder(root->left,ans);
       ans.push_back(root->val);
       recurseInorder(root->right,ans);
   }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        recurseInorder(root,ans);
        return ans;
        
       

       
    }
};
