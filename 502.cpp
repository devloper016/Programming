class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>> rel;
        for(int i=0;i<profits.size();i++){
            rel.push_back({capital[i],profits[i]});
        }
        sort(rel.begin(),rel.end());
        int i=0;
        priority_queue<int> pq;
        for(int j=0;j<k;j++){
            while(i<profits.size() && rel[i].first<=w){
                pq.push(rel[i].second);
                i++;
            }
            if(pq.empty()) break;
            w += pq.top();
            pq.pop();
        }
        return w;
    }
};
