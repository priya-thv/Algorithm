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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>ans;
        queue<TreeNode*>q;

        if(!root) return ans;
        q.push(root);
        while(!q.empty()){
            vector<int> v;
            for(int i=q.size()-1;i>=0;--i){
            TreeNode* temp=q.front();
            q.pop();
            v.push_back(temp->val);
                if(temp->left){
                   q.push(temp->left);
                }if(temp->right){
                   q.push(temp->right);
                }
            }
            ans.push_back(v);
          }
          for(int i=1;i<ans.size();i+=2){
            vector<int>temp=ans[i];
                reverse(temp.begin(),temp.end());
            ans[i]=temp;
        }return ans;
        
    }
};
