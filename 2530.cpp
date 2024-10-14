class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long ans=0;
        priority_queue<double> pq;
        for(auto it:nums){
            pq.push(double(it));
        }
        while(k-- && !pq.empty()){
            ans+=pq.top();
            cout<<pq.top()<<" ";
            double tmp = pq.top();
            pq.pop();
            pq.push(ceil(tmp/3));
        }
        return ans;
    }
};
