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
    int depth(TreeNode*root){
        if(root==NULL){
            return 0;
        }
        
        return 1+max(depth(root->left),depth(root->right));
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int lft=depth(root->left);
        int rght=depth(root->right);
        if(lft==rght){
           return root;
       }
        else if(lft>rght){
            return lcaDeepestLeaves(root->left);
        }
        return lcaDeepestLeaves(root->right);
        
    }
};