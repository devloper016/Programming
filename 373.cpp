class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int,pair<int,int>>>pq;
        vector<vector<int>> ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                int sum = nums1[i]+nums2[j];
                if(pq.size()<k){
                    pq.push({sum,{nums1[i],nums2[j]}});
                }
                else if(nums1[i]+nums2[j]<pq.top().first){
                    pq.push({nums1[i]+nums2[j],{nums1[i],nums2[j]}});
                    pq.pop();
                }
                else{
                    break;
                }
            }
        }
        while(!pq.empty()){
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
