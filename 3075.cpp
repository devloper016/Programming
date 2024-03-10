class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
        int n = h.size();
        priority_queue<int> pq;
        for(int i=0;i<n;i++) pq.push(h[i]);
        long long cnt=0,ans=0;
        while(k-- && !pq.empty()){
            long long t = pq.top();
            pq.pop();
            t-=cnt;
            if(t<0) t=0;
            ans+=t;
            cnt++;
        }
        return ans;
    }
};
