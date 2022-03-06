class Solution {
public:
    int mod=pow(10,9)+7;
    int countOrders(int n) {
        if(n==0) return 1;
        
        long long ans = (n*(2*n-1))%mod;
        ans=(ans*countOrders(n-1))%mod;
        return ans;
    }
};
