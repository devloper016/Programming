class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>> ans;
        multiset<int> s{0};
        vector<pair<int,int>> v;
        
        for(auto b : buildings){
            v.push_back({b[0],-b[2]});
            v.push_back({b[1],b[2]});
        }
        sort(v.begin(),v.end());
        int cur = 0;
        for(int i=0;i<v.size();i++){
            int h = v[i].second;
            if(h<0){
                s.insert(abs(h));
            }
            else{
                s.erase(s.find(h));
            }
            if(cur != *s.rbegin()){
                vector<int> tmp(2);
                cur = *s.rbegin();
                tmp[0] = v[i].first;
                tmp[1] = cur;
                ans.push_back(tmp);
            }
        }
        return ans;
    }
};
