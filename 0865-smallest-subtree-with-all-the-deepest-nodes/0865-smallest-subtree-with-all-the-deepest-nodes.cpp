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
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        int left=depth(root->left);
        int right=depth(root->right);
        if(left==right){
            return root;
        }else if(left>right){
            return subtreeWithAllDeepest(root->left);
        }
       return subtreeWithAllDeepest(root->right);
    }
};