//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int i=0;
    int j=0;
    int maxi=-1;
    unordered_map<char,int>map;
    while(j<s.length()){
        map[s[j]]++;
        if(map.size()<k){
           j++;
        }else if(map.size()==k){
            maxi=max(maxi,j-i+1); 
            j++;
            
        }else if(map.size()>k){
            
            while(map.size()>k){
                map[s[i]]--;
                if(map[s[i]]==0){
                    map.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends