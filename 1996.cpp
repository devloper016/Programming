class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b){
        if(a[0]!=b[0]){
            return a[0]>b[0];
        }
        return a[1]<b[1];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int count =0;
        sort(properties.begin(),properties.end(),comp);
        int mx = INT_MIN;
        for(int i=0; i<=properties.size()-1;i++){
            if(properties[i][1]<mx){
                count++;
            }
            else mx = properties[i][1];
        }
        return count;
    }
};
