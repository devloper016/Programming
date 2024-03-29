class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        if(changed.size()%2==1) return {};
        unordered_map<int,int> mp;
        sort(changed.begin(),changed.end());
        for(int i=0;i<changed.size();i++){
            mp[changed[i]]++;
        }
        for(int i=0;i<changed.size();i++){
            if(mp[changed[i]]==0) continue;
            if(mp[changed[i]*2]==0) return {};
            ans.push_back(changed[i]);
            mp[changed[i]]--;
            mp[changed[i]*2]--;
        }
        return ans;
    }
};
