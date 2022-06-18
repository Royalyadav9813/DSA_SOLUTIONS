class Solution {
public:
    void mark(vector<vector<char>>& matrix,int x,int y,int m,int n){
        if(x<0 ||x>=m ||y<0 ||y>=n|| matrix[x][y]!='1'){
            return;
        }
        matrix[x][y]='2';
        mark(matrix,x+1,y,m,n);
        mark(matrix,x-1,y,m,n);
        mark(matrix,x,y+1,m,n);
        mark(matrix,x,y-1,m,n);
    }
    int numIslands(vector<vector<char>>& grid) {
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