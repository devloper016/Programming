class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = speed.size();
        vector<float> m;
        for(int i=0;i<n;i++){
            m.push_back((float)dist[i]/speed[i]);
        }
        sort(m.begin(),m.end());
        int ans=0;
        for(int i=0;i<n;i++){
            if(m[i]<=i) break;
            
            ans++;
        }
        return ans;
    }
};
