class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),greater<int>());
        int n = apple.size(),m=capacity.size();
        int sum=0;
        for(int i=0;i<n;i++) sum+=apple[i];
        int s=0;
        for(int i=0;i<m;i++){
            s+=capacity[i];
            if(s>=sum){
                return i+1;
            }
        }
        return 0;
    }
};
