class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        unordered_map<int,int> n;
        for(auto i : nums){
            if(m[i]==0) continue;
            else if(n[i]>0){
                n[i]--;
                m[i]--;
                n[i+1]++;
            }
            else if(m[i]>0 && m[i+1]>0 && m[i+2]>0){
                m[i]--;
                m[i+1]--;
                m[i+2]--;
                n[i+3]++;
            }
            else return false;
        }
        return true;
    }
};
