class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> mp;
        int n = words.size();
        for(auto it: words){
            for(int i=0;i<it.size();i++){
                mp[it[i]]++;
            }
        }
        // for(auto it: mp){
        //     cout<<it.first<<" "<<it.second<<'\n';
        // }
        for(auto it: mp){
            if(it.second%n!=0){
                return false;
            }
        }
        return true;
    }
};
