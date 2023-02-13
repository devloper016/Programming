class Solution {
public:
    int countOdds(int low, int high) {
        if(low%2==0 && high%2==0) return abs(high-low)/2;
        else if(low%2==1 && high%2==1) return 2+abs(high-low)/2-1;
        else return abs(high-low)/2 +1;
     }
};
