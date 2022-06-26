class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int max_sum=sum;
       int j=n-1;
        int i=k-1;
        while(k>=0 && i>=0){
            sum=sum-nums[i];
            sum=sum+nums[j];
            max_sum=max(max_sum,sum); 
            i--;
            j--;
        }
          
       return max_sum; 
    }
};