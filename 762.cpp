class Solution {
public:
    int cnt(int n){
      int ans=0;
      while(n>0){
          ans+=n&1;
          n/=2;
      }
      return ans;
  }
  bool isprime(int n){
      if (n==1)return false;
      if(n==3 or n==2 )return true;
      for(int i=2;i<=n/2;i++){
          if(n%i==0){
              return false;
          }
      }
      return true;
  }
    int countPrimeSetBits(int L, int R){
        int ans=0;
        for(int i=L;i<=R;i++){
            if(isprime(cnt(i))){
                ans++;
            }
        }
        return ans;
    }
};
