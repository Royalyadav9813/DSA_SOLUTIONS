class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int i;
        priority_queue<int,vector<int>>pq;
        for(int i=0;i<heights.size()-1;i++){
            int difference=heights[i+1]-heights[i];
            if(difference>0){
                bricks=bricks-difference;
                pq.push(difference);
            }
            if(bricks<0){
                if(ladders<=0){
                    return i;
                }
                 int getbackbricks=pq.top();
                    bricks+=getbackbricks;
                    ladders--;
                    pq.pop();
                
            }
        }
        return i;
    }
};