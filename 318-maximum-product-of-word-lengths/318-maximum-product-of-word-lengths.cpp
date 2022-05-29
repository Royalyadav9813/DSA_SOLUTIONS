class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size();
        if(n<2){
            return 0;
        }
        vector<int>mask(n,0);
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=0;j<words[i].size();j++){
              temp|= 1<<(words[i][j]-'a');  
            }
            mask[i]=temp;
        }
        int maxi=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((mask[i]&mask[j])==0){
                  int pro=words[i].size()*words[j].size();  
                    maxi=max(maxi,pro);
                }
            }
        }
       return maxi; 
    }
};