class NumMatrix {
public:
    vector<vector<int>> ans;
    NumMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            vector<int>temp(matrix[0].size(),0);
            temp[0]=matrix[i][0];
            for(int j=1;j<matrix[0].size();j++){
                temp[j]=matrix[i][j]+temp[j-1];
            }
            ans.push_back(temp);
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0,temp=0;
        for(int i=row1;i<=row2;i++){
            sum+=ans[i][col2];
            if(col1>0){
                temp+=ans[i][col1-1];
            }
        }
        return sum-temp;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */