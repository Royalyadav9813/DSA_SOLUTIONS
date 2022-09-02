class Solution {
public:
    void solve(int n,int k,int indx,vector<int>&ans){
        if(ans.size()==1){
            return ;
        }
        indx=(indx+k)%(ans.size());
        ans.erase(ans.begin()+indx);
        solve(n,k,indx,ans);
    }

    int findTheWinner(int n, int k) {
        vector<int>ans;
        for(int i=1;i<=n;i++){
            ans.push_back(i);
        }
        int indx=0;
        k--;
        solve(n,k,indx,ans);
        return ans[0];
    }
};