class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> pq;
        vector<vector<int>>ans;
        for(auto i: points){
            int d = pow(i[0],2)+pow(i[1],2);
            pq.push({d,i});
        }
        while(pq.size()>0){
            if(pq.size()<=k) ans.push_back({pq.top().second});
            pq.pop();
        }
        return ans;
    }
};
