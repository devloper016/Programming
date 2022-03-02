class Solution {
public:
    int fb(int n){
     if(n==0) return 0;
     if(n==1) return 1;
        else{
        return (fb(n-1)+fb(n-2));
        }
    }
    int fib(int n) {
        return fb(n);
    }
};
