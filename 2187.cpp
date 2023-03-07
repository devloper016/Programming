class Solution {
public:
    long long minimumTime(vector<int>& time, int totaltrips) {
        long long s = 0,e = totaltrips*(long long)time[0],ans = e;
        while(s<e){
            long long mid = s +(e-s)/2;
            long long cnt = 0;
            for(int i=0;i<time.size();i++){
                cnt+= mid/time[i];
            }
            if(cnt>=totaltrips){
                ans = min(ans,mid);
                e = mid;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
};
