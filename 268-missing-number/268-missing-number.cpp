class Solution {
public:
    int missingNumber(vector<int>& nums) {
            int n=nums.size();
            int ans=nums.size();
           for(int i=0;i<n;i++){
               ans^=nums[i]^i;
           }
        return ans;
    }
};