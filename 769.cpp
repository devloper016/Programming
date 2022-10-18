class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int chunk=0,count=0;
        for(int i=0;i<arr.size();i++){
            chunk = max(chunk,arr[i]);
            if(chunk==i) count++;
        }
        return count;
    }
};
