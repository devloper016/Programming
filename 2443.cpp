class Solution {
public:
    int rev(int n){
        int res = 0;
        while(n){
            res  = res*10 + n%10;
            n /= 10;
        }
        return res;
    }
    bool sumOfNumberAndReverse(int num) {
        if(num==0) return true;
        for(int i=0;i<num;i++){
            if(num-i==rev(i)){
                return true;
            }
        }
        return false;
    }
};
