class Solution {
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),sortbylength);
        unordered_map<string,int>map;
        int ans=0;
       for(string word:words){
           for(int i=0;i<word.length();i++){
               string preced=word.substr(0,i)+word.substr(i+1);
               map[word]= max(map[word],map[preced]+1);
               
           }
           ans=max(ans,map[word]);
       }
       return ans; 
        
    }
   static bool sortbylength(string &s1,string &s2){
        return s1.length()<s2.length();
    }
};