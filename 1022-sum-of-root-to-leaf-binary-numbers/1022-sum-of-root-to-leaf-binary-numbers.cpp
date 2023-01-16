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
    vector<string>ans;
    void depth(TreeNode*root,string s){
        if(root==NULL){
            return;
        }
        s+=to_string(root->val);
        if(root->left==NULL && root->right==NULL){           
          ans.push_back(s);    
        }
        depth(root->left,s);
        depth(root->right,s);
    }
    int sumRootToLeaf(TreeNode* root) {
       
        string s;
        int res=0;
        depth(root,s);
        for(auto it:ans){
            res+=stoi(it,0,2);
        }
     
        
        return res;
    }
};