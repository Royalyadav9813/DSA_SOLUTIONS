class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        int dp[m][n];
        memset(dp,0,sizeof(dp));//Points to remainder(memset can take value 0 and -1 only);
        for(int i=0;i<m;i++){
            if(obstacleGrid[i][0]!=1){
                dp[i][0]=1;      //Boundary case;
            }else{
                break;
            }
        }
        for(int j=0;j<n;j++){
            if(obstacleGrid[0][j]!=1){
                dp[0][j]=1;     //Boundary case;
            }else{
                break;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(obstacleGrid[i][j]==1){
                dp[i][j]=0;
                }else{
                dp[i][j]=dp[i][j-1]+dp[i-1][j];               
                }
                            
            }
        }
        return dp[m-1][n-1];
    }
};