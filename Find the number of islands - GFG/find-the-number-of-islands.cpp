//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void mark(vector<vector<char>>& grid,int x,int y,int m,int n){
        if(x<0 ||x>=m ||y<0 ||y>=n|| grid[x][y]!='1'){
            return;
        }
        grid[x][y]='2';
        mark(grid,x+1,y,m,n);
        mark(grid,x-1,y,m,n);
        mark(grid,x,y+1,m,n);
        mark(grid,x,y-1,m,n);
        mark(grid,x-1,y-1,m,n);
        mark(grid,x-1,y+1,m,n);
        mark(grid,x+1,y-1,m,n);
        mark(grid,x+1,y+1,m,n);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
       int m=grid.size();
        int n=grid[0].size();
        int no_of_island=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){          
                    no_of_island+=1;
                   mark(grid,i,j,m,n); 
                }
            }
        }
        return no_of_island;        

    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends