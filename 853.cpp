class Solution {
public:
    static bool comp(pair<int,int> a,pair<int,int> b){
        return a.first>b.first;
    }
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> v;
        for(int i=0;i<position.size();i++){
            v.push_back({position[i],speed[i]});
        }
        sort(v.begin(),v.end(),comp);
        stack<double> st;
        for(int i=0;i<v.size();i++){
            double t = (double)(target-v[i].first)/(double)v[i].second;
            if(!st.empty()&& t>st.top()){
                st.push(t);
            }
            else if(st.empty()) st.push(t);
        }
        return st.size();
    }
};
