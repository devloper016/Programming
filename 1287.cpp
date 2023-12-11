class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int cnt=1;
        int n = arr.size();
        if(n==1) return arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                cnt++;
                if(cnt>n/4){
                    return arr[i];
                }
            }
            else cnt=1;
        }
        return -1;
    }
};
