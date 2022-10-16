class Solution {
public:
    int reverse(int x) {
        if(x>0){
            if(x>=INT_MAX) return 0;
            long long res = 0;
            while(x){
                res  = res*10 + x%10;
                if(res >= INT_MAX) return 0;
                x /= 10;
            }
            return res;
        }
        else{
            if(x<=INT_MIN) return 0;
            int y = abs(x);
            long long res = 0;
            while(y){
                res  = res*10 + y%10;
                if(res>=INT_MAX) return 0;
                y /= 10;
            }
            res = -res;
            return res;
        }
    }
};
