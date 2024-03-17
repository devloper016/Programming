class Solution {
public:
    vector<long long> unmarkedSumArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<long long> ans;
        int n = nums.size(),m=queries.size();
        set<long long> st;
        long long s=0;
        priority_queue<pair<long long,long long>,vector<pair<long long ,long long>>,greater<pair<long long,long long>>> pq;
        for(int i=0;i<n;i++){
            s+=nums[i];
            pq.push({nums[i],i});
        }
        for(int i=0;i<m;i++){
            int id = queries[i][0];
            int k = queries[i][1];
            if(st.count(id)==0){
                st.insert(id);
                s-=nums[id];
            }
            while(!pq.empty() && k>0){
                long long num = pq.top().first;
                long long ind = pq.top().second;
                pq.pop();
                if(st.find(ind)==st.end()){
                    st.insert(ind);
                    s-=num;
                    k--;
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
};
