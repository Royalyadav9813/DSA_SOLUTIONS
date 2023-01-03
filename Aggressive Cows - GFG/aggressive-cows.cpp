//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isPossible(int k,int mid,vector<int>&v){
        int cowCount=1;
        int lastpos=v[0];
        for(int i=0;i<v.size();i++){
            if(v[i]-lastpos>=mid){
                cowCount++;
                if(cowCount==k){
                    return true;
                }
                lastpos=v[i];
            }
        }
        return false;
    }
    int solve(int n, int k, vector<int> &v) {
    
        // Write your code here
        sort(v.begin(),v.end());
        int start=1;
        int end=v[n-1]-v[0];
        int ans;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isPossible(k,mid,v)){
                ans=mid;
                start=mid+1;
                
            }else{
                end=mid-1;
            }
            
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends