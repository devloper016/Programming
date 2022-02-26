class Solution {
public:
    int guessNumber(int n) {
        int s=0,e=n,mid;
        while(s<=e){
            mid = s + (e-s)/2;
            if(guess(mid)==0) return mid;
            
            else if(guess(mid)<0) e = mid-1;
            
            else s = mid+1;
        }
        return -1;
    }
};
