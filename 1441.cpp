class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int k=1;
        for(int i=0;i<target.size();i++){
            while(k<target[i]){
                ans.push_back("Push");
                ans.push_back("Pop");
                k++;
            }
            ans.push_back("Push");
            k++;
        }
        return ans;
    }
};
