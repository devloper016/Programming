class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int s = left.size();
        int m = right.size();
        
        int r=INT_MIN,l=INT_MIN;
        for(int i=0;i<s;i++){
            if(abs(left[i]-0)>l) l = abs(left[i]-0);
        }
        for(int i=0;i<m;i++){
            if(abs(n-right[i])>r) r = abs(n-right[i]);
        }
        return max(l,r);
    }
};
