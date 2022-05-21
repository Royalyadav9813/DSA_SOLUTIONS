class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
     int m=matrix.size();
       
        for(int i=0;i<m;i++){
            set<int>s1;
            set<int>s2;
          for(int j=0;j<m;j++){
              s1.insert(matrix[i][j]);
              s2.insert(matrix[j][i]);
          }  
            if(s1.size()!=m){
                return false;
            }
            if(s2.size()!=m){
                return false;
            }
        }
         
      return true;  
        
    }
};