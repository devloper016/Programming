class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n= arr.size()*(5.0/100.0);
        double sum=0;
        int count=0;
        for(int i=n;i<arr.size()-n;i++){
            sum += arr[i];
            count++;
        }
        double ans = sum/count;
        return ans;
    }
};
