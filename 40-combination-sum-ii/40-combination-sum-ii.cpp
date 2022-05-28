class Solution {
public:
   
    void helper(vector<int>& candidates, int target,vector<int>&temp,int indx,vector<vector<int>>&ans){
     if(target==0){
         ans.push_back(temp);
         return;
     }
        for(int i=indx;i<candidates.size();i++){
            if(candidates[i]>target){
                break;
            }
            if(i>indx && candidates[i]==candidates[i-1]){
                continue;
            }
            temp.push_back(candidates[i]);
             helper(candidates,target-candidates[i],temp,i+1,ans);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>temp;    
        helper(candidates,target,temp,0,ans);
        return ans;
    }
};