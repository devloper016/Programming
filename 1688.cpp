class Solution {
public:
    int sol(int n,int ans){
        if(!n) return ans;
        if(n%2==0){
           ans =  sol(n/2,ans+n/2);
        }
        else{
           ans =  sol((n-1)/2,1+ans+(n-1)/2);
        }
        return ans;
    }
    int numberOfMatches(int n) {
        return sol(n,0)-1;
    }
};
