class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>ans;
        int i=0;
        for(int j=0;j<n;j++){
           vector<int>temp;
            while(i!=m){
                temp.push_back(matrix[i][j]);
                i++;
            }
            i=0;
            ans.push_back(temp);
        }
        
        return ans;
    }
};