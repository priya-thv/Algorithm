https://leetcode.com/problems/validate-binary-search-tree/submissions/881132206/


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
    vector<int>ans;
    void inorder(TreeNode*root){
        if(root==NULL){
            return;
        }
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);

    }
public:
    bool isValidBST(TreeNode* root) {
        inorder(root);
         for(int i=0;i<ans.size()-1;i++){
             if(ans[i+1]<ans[i]){
                 return false;
             }else if(ans[i+1]==ans[i]){
                 return false;
             }
         }   return true;
    }
};
