class Solution {
public:
    bool cas(long long int k,int n){
        k = k*(k+1)/2;
        return n>=k;
    }
    int arrangeCoins(int n) {
        int s=0,e=n,mid,k;
        while(s<=e){
            mid = s +(e-s)/2;
            if(cas(mid,n)){
                s = mid+1,k=mid;
            }
            else e = mid-1;
        }
        return k;
    }
};
