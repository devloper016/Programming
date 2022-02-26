class Solution {
public:
    bool isPerfectSquare(int num) {
       long long int s =0, e=num , mid;
        while(s<=e){
            mid = s + (e-s)/2;
            if(mid*mid == num) return mid;
            else if(mid*mid>num){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return false;
    }
};
