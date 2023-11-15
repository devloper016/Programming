class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int z=0;
        if(arr[0]!=1){
            arr[0] = 1;
            z = arr[0]-(arr[0]-1);
        }
        for(int i=1;i<n;i++){
            if(abs(arr[i]-arr[i-1])>1){
                arr[i] = arr[i-1]+1;
            }
        }
        return arr[n-1];
    }
};
