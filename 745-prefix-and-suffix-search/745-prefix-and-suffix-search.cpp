class WordFilter {
    private:
    unordered_map<string,int>mp;
public:
    WordFilter(vector<string>& words) {
        for(int i=0;i<words.size();i++)
          insert(i,words[i]);
        
    }
    
    void insert(int index,string word)
    {int len=word.size();
        for(int i=0;i<len;i++)
            for(int j=0;j<len;j++)
            {
                string s2=word.substr(j);
               string s1=word.substr(0,len-i);
                // cout<<s1+"#"+s2<<endl;
                mp[s1+"#"+s2]=index+1;
            }
    }
    int f(string prefix, string suffix) {
     string s=prefix+"#"+suffix;
        return mp[s]-1;
    }
    
};