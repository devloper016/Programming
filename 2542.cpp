class Solution {
public:
   static bool sol(pair<int,int>&a,pair<int,int>&b){
        if(a.first==b.first) return a.second>b.second;
        return a.first>b.first;
    }
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>> rel;
        int n = nums1.size();
        for(int i=0;i<n;i++){
            rel.push_back({nums2[i],nums1[i]});
        }
        sort(rel.begin(),rel.end(),sol);
        priority_queue<int,vector<int>,greater<int>> pq;
        long long sum=0;
        long long ans=0;
        for(int i=0;i<n;i++){
            sum += rel[i].second;
            pq.push(rel[i].second);
            if(pq.size()>k){
                int top = pq.top();
                sum -= top;
                pq.pop();
            }
            if(pq.size()==k){
                ans = max(ans,(long long)rel[i].first*sum);
            }
            
        }
        return ans;
    }
};
