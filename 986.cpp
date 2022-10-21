class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& v1, vector<vector<int>>& v2) {
        int i=0,j=0;
        int n = v1.size(),m=v2.size();
        vector<vector<int>> ans;
        while(i<n && j<m){
            int a = v1[i][0], b = v1[i][1],c = v2[j][0],d=v2[j][1];
            if(d<a||c>b){
                if(b<d) i++;
                else j++;
            }
            else{
                int mx = max(v1[i][0],v2[j][0]);
                int mn = min(v1[i][1],v2[j][1]);
                ans.push_back({mx,mn});
                if(b<d)i++;
                else j++;
            }
        }
        return ans;
    }
};
