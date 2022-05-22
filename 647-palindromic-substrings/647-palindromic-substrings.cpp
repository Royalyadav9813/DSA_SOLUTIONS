class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        vector<vector<int>>dp(n,vector<int>(n,0));
        int count=0;
        for(int i=0;i<n;i++){
            dp[i][i]=1;
            count++;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(j+1==i && s[i]==s[j]||dp[j+1][i-1]==1 && s[i]==s[j]){
                    dp[j][i]=1;
                    count++;
                }
            }
        }
        return count;
    }
};