class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n = bank.size();
        int pre=0;
        int ans=0;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(auto c: bank[i]){
                if(c=='1') cnt++;
            }
            if(cnt!=0){
                ans+=(cnt*pre);
                pre = cnt;
            }
        }
        return ans;
    }
};
