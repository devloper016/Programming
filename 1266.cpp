class Solution {
public:
    int dist(vector<int> &a,vector<int> &b){
        int cost=0;
        int mx  = abs(a[0]-b[0]);
        int my = abs(a[1]-b[1]);
        
        return max(mx,my);
    }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans+=dist(points[i],points[i+1]);
        }
        return ans;
    }
};
