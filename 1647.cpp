class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp;
        unordered_set<int> st;
        
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int ans=0;
        for(auto it: mp){
            int f = it.second;
            while(f>0 && st.find(f)!=st.end()){
                f--;
                ans++;
            }
            st.insert(f);
        }
        return ans;
    }
};
