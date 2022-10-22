//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int k=pat.length();
	    int m=txt.length();
	    int count=0;
	    vector<int>thash(26,0);
	    vector<int>phash(26,0);
	    for(int i=0;i<k;i++){
	        phash[pat[i]-'a']++;
	        thash[txt[i]-'a']++;
	    }
	    if(thash==phash){
	        count++;
	    }
	    for(int i=k;i<m;i++){
	        thash[txt[i]-'a']++;
	        thash[txt[i-k]-'a']--;
	        if(thash==phash){
	            count++;
	        }
	    }
	   return count; 
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends