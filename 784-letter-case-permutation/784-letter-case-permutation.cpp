class Solution {
public:
    set<string>set;
    void solve(string s,string op,vector<string>&ans){
        if(s.length()==0){
           ans.push_back(op);
            return;
        }
        string op1=op;
        string op2=op;
        if(isdigit(s[0])){
          op1.push_back(s[0]); 
          s.erase(s.begin()+0);
          solve(s,op1,ans);  
        }
        else{
        op1.push_back(toupper(s[0]));
        op2.push_back(tolower(s[0]));
        s.erase(s.begin()+0);
        solve(s,op1,ans);
        solve(s,op2,ans);  
        }
       
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
      
        string op="";       
        solve(s,op,ans);
       
      
        return ans;
    }
};