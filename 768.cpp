class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        vector<int> rmin(n+1);
        int lmax=INT_MIN;
        rmin[n] = INT_MAX;
        int mx=INT_MIN;
        for(int i=n-1;i>=0;i--){
            rmin[i] = min(rmin[i+1],arr[i]);
        }
        for(int i=0;i<arr.size();i++){
            lmax = max(lmax,arr[i]);
            if(lmax<=rmin[i+1]) count++;
        }
        return count;
    }
};
