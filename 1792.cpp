class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& v, int e) {
        int n = v.size();
        priority_queue<pair<double,int>>pq;
        double ans=0;
        for(int i=0;i<n;i++){
            double tmp = (double)((double)(v[i][0]+1)/(double)(v[i][1]+1) - (double)v[i][0]/(double)v[i][1]);
            ans+= (double)v[i][0]/v[i][1];
            pq.push({tmp,i});
        }
        int j=1;
        while(j<=e){
            auto it = pq.top();
            pq.pop();
            double d = it.first;
            int id = it.second;
            v[id][0]++;
            v[id][1]++;
            double tmp = (double)((double)(v[id][0]+1)/(double)(v[id][1]+1)) - (double)((double)v[id][0]/(double)v[id][1]);
            pq.push({tmp,id});
            ans+=d;
            j++;
        }
        return ans/n;
    }
};
