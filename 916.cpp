class Solution {
public:
    vector<int> freq(string s){
        vector<int> f(26,0);
        for(int i=0;i<s.length();i++){
            f[s[i]-'a']++;
        }
        return f;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;
        vector<int> maxfreq(26,0);
        
        for(auto &x : words2){
            vector<int> f = freq(x);
            for(int i=0;i<26;i++){
                maxfreq[i] = max(maxfreq[i],f[i]);
            }
        }
            for(auto &x : words1){
                vector<int> f = freq(x);
                bool flag = true;
                for(int i=0;i<26;i++){
                    if(f[i]<maxfreq[i]){
                        flag = false;
                        break;
                    }
                }
                if(flag){
                    res.push_back(x);
                }
        }
        return res;
    }
};
