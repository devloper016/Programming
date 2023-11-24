class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        sort(piles.begin(),piles.end());
        int j=n-1;
        int ans=0;
        int i=0;
        while(i<j){
            vector<int> tmp(3);
            tmp[0] = piles[i];
            tmp[1] = piles[j-1];
            tmp[2] = piles[j];
            
            ans+=tmp[1];
            i++;
            j-=2;    
        }
        return ans;
    }
};
