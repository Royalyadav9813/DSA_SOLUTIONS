class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n=nums.size();
       priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        int ans=0;
       while(!pq.empty()&& ans!=k){
           int k=-(pq.top());
           pq.pop();
           pq.push(k);
           ans++;
       }
        int res=0;
        while(!pq.empty()){
           res+=pq.top();
            pq.pop();
        }
        return res;
    }
};