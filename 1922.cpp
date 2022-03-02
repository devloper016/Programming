class Solution {
public:
    int mod=1e9+7;
   long long int power(int q,long long n){
        if(n==0)
            return 1;
        long long x=power(q,n/2);
        if(n%2==0)
            return (x*x)%mod;
        return (((q*x)%mod)*x)%mod;
    }
    int countGoodNumbers(long long n) {
       return ((power(4,n/2))*power(5,(n+1)/2))%mod;
      
    }
};
