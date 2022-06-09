class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        vector<int>ans(2);
       while(start<end){
           int temp=nums[start]+nums[end];
               if(temp==target){
                   ans[0]=start+1;
                   ans[1]=end+1;
                   return ans;
               }else if(temp>target){
                   end--;
               }else{
                   start++;
               }
           }
       return ans;
    }
};