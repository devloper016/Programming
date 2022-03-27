class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>> s;
        
        for(int i=0;i<mat.size();i++){
            int cot = count(mat[i].begin(),mat[i].end(),1) ;
            s.insert({cot,i});
        }
        vector<int> res;
        for(auto it:s){
            if(k==0) break;
            res.push_back(it.second);
            --k;
        }
        return res;
    }
};
