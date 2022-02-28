class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int total=0, minval=0;
        
        for(int n: nums){
            total += n;
            minval = min(minval,total);
        }
        return -minval+1;
    }
};
