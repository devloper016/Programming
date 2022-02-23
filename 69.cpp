class Solution {
public:
    int mySqrt(int x) {
    long long int s =0,e=x,mid=0;
        while(s<=e){
            mid = s + (e-s)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid<x){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return e;
    }
};
