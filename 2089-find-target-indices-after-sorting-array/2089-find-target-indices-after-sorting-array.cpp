class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
       sort(nums.begin(),nums.end());
        vector<int>ans;
        int start=0;
        int end=nums.size()-1;
        int ans1=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                ans1=mid;
                
                end=mid-1;
                
            }
            if(nums[mid]>target){
               end=mid-1;
            }else if(nums[mid]<target){
                start=mid+1;
            }
        }
        start=0;
        end=nums.size()-1;
        int ans2=-1;
         while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                ans2=mid;
               
                start=mid+1;
                
            }
            if(nums[mid]>target){
                end=mid-1;
            }else if(nums[mid]<target){
                start=mid+1;
            }
        }
       for(int i=ans1;i<=ans2;i++){
           if(i==-1){
               continue;
           }
           ans.push_back(i);
       }
        return ans;
    }
};