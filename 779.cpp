class Solution {
public:
    int sol(int n,int k){
        if(n==1) return 0;
        
        int total = pow(2,(n-1));
        int half = total/2;
        
        if(k>half){
            return 1-kthGrammar(n,k-half);
        }
        
        return sol(n-1,k);
        
    }
    int kthGrammar(int n, int k) {
        return sol(n,k);
    }
};
