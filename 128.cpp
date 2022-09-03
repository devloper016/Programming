class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hash;
        for(int i : nums){
            hash.insert(i);
        }
        int mx=0,count=0;
        for(int i: nums){
            if(!hash.count(i-1)){
                int cm = i;
                count=1;
                while(hash.count(cm+1)){
                    cm += 1;
                    count++;
                }
                mx = max(mx,count);
            }
        }
        return mx;
    }
};
