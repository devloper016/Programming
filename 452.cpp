class Solution {
public:
    static int comp(vector<int>&a,vector<int>&b){
        return a[1] < b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        sort(points.begin(),points.end(),comp);
        vector<int> recent = points[0];
        int count=1;
        for(int i=1;i<n;i++){
            if(recent[1]<points[i][0]){
                count++;
                recent = points[i];
            }
        }
        return count;
    }
};
