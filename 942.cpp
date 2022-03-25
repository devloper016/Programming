class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& cost) {
        vector<int> dif;
        int min=0;
        for(int i=0;i<cost.size();i++){
            min += cost[i][0];
            dif.push_back(cost[i][1]-cost[i][0]);
        }
        sort(dif.begin(),dif.end());
        for(int i=0;i<dif.size()/2;i++){
            min += dif[i];
        }
        return min;
    }
};
