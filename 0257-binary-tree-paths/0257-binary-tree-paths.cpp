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
    void leaf(TreeNode*root,string s,vector<string>&res){
        if(root==NULL){
            return;
        }
        if(root->left!=NULL||root->right!=NULL){
            s+=to_string(root->val)+"->";          
        }
          else{
              s+=to_string(root->val);
              res.push_back(s);  
          }
        leaf(root->left,s,res);
        leaf(root->right,s,res);
       
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        string s;    
        leaf(root,s,res);
        return res;
        
        
    }
};