class Solution {
public:
    bool isPowerOfThree(int n) {
     if(n==0) return false;
     else if(n==1) return true;
     else if(n%3==0 && isPowerOfThree(n/3)) {
            return true;
            }  
        return false;
    }
};
