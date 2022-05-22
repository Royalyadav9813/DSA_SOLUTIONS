class Solution {
public:
    vector<vector<int>>ans;
    void helper(vector<int>& nums,set<vector<int>>&s,vector<int> temp,int i,int n){
        if(i==n){
            // ans.push_back(s);
            s.insert(temp);
            return;
        }
        helper(nums,s,temp,i+1,n);
        temp.push_back(nums[i]);
        helper(nums,s,temp,i+1,n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>>s;
        vector<int> temp;
        helper(nums,s,temp,0,n);
        for(auto i:s){
            ans.push_back(i);
        }
        return ans;
    }
};