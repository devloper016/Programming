class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back({newInterval});
        sort(intervals.begin(),intervals.end());
        int i=0;
        for(int j=1;j<intervals.size();j++){
            if(intervals[i][1]>=intervals[j][0]){
                intervals[i][1] = max(intervals[i][1],intervals[j][1]);
            }
            else{
                i++;
                intervals[i] = intervals[j];
            }
        }
        vector<vector<int>> ans;
        for(int j=0;j<=i;j++){
            ans.push_back(intervals[j]);
        }
        return ans;
    }
};
