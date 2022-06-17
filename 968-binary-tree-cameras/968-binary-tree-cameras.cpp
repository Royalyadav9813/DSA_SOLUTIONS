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
    int count=0;
    int helper(TreeNode*root){
        if(root==NULL){
            return 1;
        }
       int a= helper(root->left);
       int b=helper(root->right);
        if(a==1 && b==1){
            return 0;
        }else if(a==0||b==0){
            count++;
            return 2;
        }else{
           return 1; 
        }
    }
    int minCameraCover(TreeNode* root) {
        int x=helper(root);
        if(x==0){
            return count+1;
        }
        return count;
    }
};