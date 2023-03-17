//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int Lcs(int a[],vector<int>&temp,int n,int m){
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0||j==0){
                    dp[i][j]=0;
                }else if(a[i-1]==temp[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return dp[n][m];
    }
    int longestSubsequence(int n, int a[])
    {
       // your code here
       vector<int>temp;
       unordered_set<int>s;
       for(int i=0;i<n;i++){
           s.insert(a[i]);
       }
       for(auto i:s){
           temp.push_back(i);
       }
       sort(temp.begin(),temp.end());
       int ans=Lcs(a,temp,n,temp.size());
       return ans;
       
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        //taking size of array
        cin>>n;
        int a[n];
        
        //inserting elements to the array
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        //calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends