class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
       int n=nums.size();
       int total=0;
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            total+=nums[i];
            map[total]=i;
        }
        if(x>total){
            return -1;
        }
        int longest=0;
        int sum=total-x;
      
        map[0]=0;
        int val=0;
        for(int i=0;i<n;i++){
             val+=nums[i];
            if(map.count(val-sum)){
                if(val-sum==0){
                    longest=max(longest,i-map[val-sum]+1);
                }else{
                    longest=max(longest,i-map[val-sum]);
                }
            }
        }
        if(longest==0 && sum==0){
            return n;
        }else if(longest==0 && sum!=0){
            return -1;
        }else{
                 return n-longest; 
  
        }
            
    }
};