class Solution 
{
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals)
    {
        int res = 0;
        sort(intervals.begin(), intervals.end());
        
        int start = 0, end=1;
        int rBorderOfSelectedInterval = intervals[0][end];
        for(int i=1; i<intervals.size(); i++)
        {
            if(intervals[i][start] < rBorderOfSelectedInterval) // overalap
            {
                res++; 
                rBorderOfSelectedInterval = min(rBorderOfSelectedInterval, intervals[i][end]);
            }
            else
            {  
                rBorderOfSelectedInterval = intervals[i][end];
            }
        }
        return res;
    }
};
