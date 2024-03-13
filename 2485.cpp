class Solution {
public:
    int pivotInteger(int n) {
        vector<int> p(n+1,0);
        int sum=0;
        for(int i=1;i<=n;i++){
            p[i] = sum+i;
            sum = p[i];
        }
        for(int i=1;i<=n;i++){
            if(p[i] == (p[n]-p[i]+i)){
                return i;
            }
        }
        return -1;
    }
};
