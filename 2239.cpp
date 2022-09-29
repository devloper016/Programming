class Solution {
public:
    int findClosestNumber(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i=0;
        int j = arr.size()-1;
        
        while(j-i>=1){
            if((0-arr[i])>=(arr[j]-0)) i++;
            else j--;
        }
        for(int z=i;z<=j;z++){
            cout<<arr[z]<<" ";
        }
        return arr[j];
    }
};
