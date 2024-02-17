class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        priority_queue<int> pq;
        for(int i=0;i<n-1;i++){
            int dif = heights[i+1]-heights[i];
            if(dif>0){
                if(dif<=bricks){
                    bricks-=dif;
                    pq.push(dif);
                }
                else if(ladders){
                    if(pq.size()>0 && pq.top()>dif){
                        auto it = pq.top();
                        pq.pop();

                        bricks=bricks+it-dif;
                        ladders--;
                        pq.push(dif);
                    }
                    else ladders--;
                }
                else{
                    return i;
                }
            }
        }
        return n-1;
    }
};
