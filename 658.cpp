class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        multiset<pair<int,int>> ms;
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            ms.insert({abs(arr[i]-x),arr[i]});
        }
        auto it = ms.begin();
        while(k--){
            ans.push_back(it->second);
            it++;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
