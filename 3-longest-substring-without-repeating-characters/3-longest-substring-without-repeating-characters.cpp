class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int res=0;
        unordered_map <char,int>map;
        while(right<s.length()){
            char c=s[right];
            map[c]++;
            while(map[c]>1){
               char d=s[left];
                left++;
                map[d]--;
            }
           right++;
            res=max(res,right-left);
        }
        return res;
    }
};