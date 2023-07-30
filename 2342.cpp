class Solution {
public:
    int help(long long num){
        long long n = 0;
        while(num>0){
            long long re = num%10;
            n += re;
            num /= 10;
        }
        return n;
    }
    int maximumSum(vector<int>& nums) {
        priority_queue<pair<long long,long long>> pq;
        for(int i=0;i<nums.size();i++){
            long long n = help(nums[i]);
            pq.push({n,nums[i]});
        }
        
        long long ans = -1;
        while(pq.size()>=2){
            long long a = pq.top().first;
            long long b = pq.top().second;
            pq.pop();
            long long c = pq.top().first;
            long long d = pq.top().second;
            pq.pop();
            
            if(a==c){
                ans = max(ans,b+d);
            }
            else pq.push({c,d});
        }
        return ans;
    }
};
