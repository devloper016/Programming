class Solution {
public:
    static bool comp(pair<int,int>a,pair<int,int> b){
        if(a.first==b.first) return a.second<b.second;
        return a.first < b.first;
    }
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        vector<pair<int,int>> v;
        //int count=0;
        for(int i=0;i<points.size();i++){
            int l = points[i][0];
            int r = points[i][1];
            if(l==x || r==y){
                //count++;
            v.push_back({abs(l-x)+abs(r-y),i});
            }     
        }
        sort(v.begin(),v.end(),comp);
        //cout<<count;
        if(v.size()==0) return -1;
        return v[0].second;
    }
};
