class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        for(int i=0;i<arr2.size();i++){
            int cnt = mp[arr2[i]];
            while(cnt--){
                ans.push_back(arr2[i]);
            }
            mp[arr2[i]]=0;
        }
        vector<int> tmp;
        for(int i=0;i<arr1.size();i++){
            if(mp[arr1[i]]!=0){
             tmp.push_back(arr1[i]);  
            }   
        }
        sort(tmp.begin(),tmp.end());
        ans.insert(ans.end(),tmp.begin(),tmp.end());
        return ans;
    }
};
