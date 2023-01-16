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
     vector<vector<int>>ans;
    void helper(TreeNode*root,int targetSum,vector<int>&path,int currentSum){
        if(root==NULL){
            return;
        }
      currentSum+=root->val;
        path.push_back(root->val);
        if(currentSum==targetSum && root->left==NULL&&root->right==NULL){
            ans.push_back(path);
        }
        helper(root->left,targetSum,path,currentSum);
        helper(root->right,targetSum,path,currentSum);
        path.pop_back();
        
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       
        vector<int>path;
        helper(root,targetSum,path,0);
        return ans;
    }
};