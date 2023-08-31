class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        int mn = 0;
        int mx = 0;
        int ans=0;
        while(mx<n){
            for(int i=0;i<ranges.size();i++){
                if(i-ranges[i] <= mn && ranges[i]+i>mx){
                    mx = ranges[i]+i;
                }
            }
            if(mx==mn) return -1;
            ans++;
            mn = mx;
        }
        return ans;
    }
};
