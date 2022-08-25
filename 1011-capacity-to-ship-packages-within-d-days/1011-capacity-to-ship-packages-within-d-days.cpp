class Solution {
public:
    bool isValid(vector<int>& weights,int n, int days,int mid){
        int sum=0;
        int count=1;
        for(int i=0;i<n;i++){
            sum+=weights[i];
             if(sum>mid){
               count++;
               sum=weights[i];
        }
            
        if(count>days){
            return false;
        }
        }
        return true;
       
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int start=INT_MIN;
        int end=0;
        if(days>n){
            return -1;
        }
        for(int i=0;i<n;i++){
            if(weights[i]>start){
                start=weights[i];
            }
            end+=weights[i];
        }
        int res=-1;
        while(start<=end){
           int mid=start+(end-start)/2;
            if(isValid(weights,n,days,mid)==true){
               res=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return res;
    }
};
