class Solution {
public:
    int minDeletions(string s) {
        int n=s.length();
        unordered_map<char,int>map;
        for(int i=0;i<n;i++){
            map[s[i]]++;
        }
        priority_queue<int>pq;
        for(auto &it:map){
            pq.push(it.second);
        }
        int count=0;
        while(pq.size()!=1){
            int top=pq.top();
            pq.pop();
            if(pq.top()==top && top!=0){
                count++;
                pq.push(top-1);
            }
        }
      return count;  
    }
};