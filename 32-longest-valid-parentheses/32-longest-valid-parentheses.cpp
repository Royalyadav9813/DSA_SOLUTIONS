class Solution {
public:
    int longestValidParentheses(string str) {
      int n=str.length();
        int maxi=0;
       stack<int>s;
        s.push(-1);
        for(int i=0;i<n;i++){
            if(str[i]=='('){
                s.push(i);
            }else{
                s.pop();
                if(s.empty()){
                   s.push(i); 
                }else{
                    maxi=max(maxi,i-s.top());
                }
            }
        }
       return maxi;
    }
};