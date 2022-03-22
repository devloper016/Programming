class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans(n,'a');
        k -= n;
        
        int i = ans.size()-1;
        while(k>0){
            int temp = min(k,25);
            ans[i]+= temp;
            k -= temp;
            i--;
        }
        return ans;
    }
};
