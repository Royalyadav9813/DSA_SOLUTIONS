class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0;
        int end=letters.size()-1;
        char ans=letters[0];
        while(start<=end){
            int mid=start+(end-start)/2;
           
            if(target<letters[mid]){
                ans=letters[mid];
                end=mid-1;
            }else{
               start=mid+1;
               
            }
        }
        return ans;
    }
};