class Solution {
public:
    bool sol(int mid,vector<int>&weights,int days){
        int cur = 0;
        int d = 1;
        for(int i=0;i<weights.size();i++){
            if(cur+weights[i]>mid){
                d++;
                cur=0;
            }
            cur += weights[i];
        }
        if(d>days) return false;
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int s=0,e=0;
        int ans;
        for(int i=0;i<weights.size();i++){
            s = max(s,weights[i]);
            e += weights[i];
        }
        while(s<=e){
            int mid = s + (e-s)/2;
            if(sol(mid,weights,days)){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
};
