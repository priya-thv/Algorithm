https://leetcode.com/problems/balanced-binary-tree/submissions/884815670/


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
    unordered_map<TreeNode*,int>mp;

    int getheight(TreeNode*root){
        if(!root)return 0;
        if(mp.find(root)!=mp.end())return mp[root];
        int h=1+max(getheight(root->left),getheight(root->right));
        mp[root]=h;
        return h;
    }
public:
    bool isBalanced(TreeNode* root) {
       if(!root)return true;
       int l=getheight(root->left);
       int r=getheight(root->right);
       return abs(l-r)<2 && isBalanced(root->left) && isBalanced(root->right);       

    }
};
