class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size()-1;
        int m=n/2;
        int x=m;
       sort(nums.begin(),nums.end());
        vector<int>ans;
       while(m>=0){
           ans.push_back(nums[m]);
           m--;
           if(n>x){
               ans.push_back(nums[n]);
               n--;
           }
       }
       
        nums=ans;
        
    }
};