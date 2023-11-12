class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& accessRecords) {
        unordered_map<string, vector<int>> mp;
        for (auto& it: accessRecords) {
            int t = stoi(it[1].substr(0, 2))*60 + stoi(it[1].substr(2,2));
            mp[it[0]].push_back(t);
        }
        vector<string> ans;
        set<string> st;
        for (auto&it :mp) {
            vector<int>& tp = it.second;
            if(tp.size()<3) continue;
            int cnt=0;
            sort(tp.begin(), tp.end());
            for (int i=0;i<tp.size()-2;i++){
                if (tp[i+2]-tp[i]<60) {
                        st.insert(it.first);
                } 
            }
        }
        for(auto it: st){ans.push_back(it);}
        return ans;
    }
};
