//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int common_divisor(int a, int b);

int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        
        cout << common_divisor(a, b) << endl;
        
    }
    
	return 0;
}
// } Driver Code Ends


int common_divisor(int a, int b)
{
    // Complete the function
    int k=min(a,b);
    int count=0;
    for(int i=1;i<=k;i++){
        if(a%i==0 && b%i==0){
            count++;
        }
    }
    return count;
    
}
