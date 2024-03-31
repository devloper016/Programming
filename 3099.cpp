class Solution {
public:
    int su(int x){
        int ans=0;
        while(x){
            ans+=(x%10);
            x/=10;
        }
        return ans;
    }
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = su(x);
        if(x%sum==0) return sum;
        return -1;
    }
};
