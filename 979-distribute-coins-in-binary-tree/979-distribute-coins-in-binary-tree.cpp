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
    int moves=0;
    int distributeCoins(TreeNode* root) {
        helper(root,root);
        return moves;
    }
    void helper(TreeNode* root,TreeNode* parent){
        if(root==NULL){
            return;
        }
        helper(root->left,root);
        helper(root->right,root);
        if(root->val>=1){
            int extra=root->val-1;
            parent->val+=extra;
            root->val=1;
            moves+=extra;
        }else{
            int require=1+abs(root->val);
            parent->val-=require;
            root->val=1;
            moves+=require;
        }
        
    }
};