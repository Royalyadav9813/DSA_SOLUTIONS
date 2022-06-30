class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>ans;
        long int sum=0;
        int i=0;
        int j=n/2;
       while(i<j){
            ans.push_back(nums[j]-nums[i]);
           i++;
        }
        while(n>j){
            ans.push_back(nums[n-1]-nums[j]);
            n--;
        }
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
        }
        return sum;
    }
};