class Solution {
public:
    bool isUgly(int n) {
        if(n==1) return true;
       else if(n==0) return false;
       else if(n%2 == 0){
            n = n/2;
           return isUgly(n);
        }
        else if(n%3==0){
            n = n/3;
           return isUgly(n);
        }
        else if(n%5==0){
            n = n/5;
            return isUgly(n);
        }
        else  return false;
    }
};
