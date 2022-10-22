class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> freq;
        for(int i = 0; i < t.size(); i++){
            freq[t[i]]++;
        }
        for(int i = 0; i < s.size(); i++){
            freq[s[i]]--;
        }
        
        for(auto it: freq){
            if(it.second > 0){
                return "";
            }
        }
        int l = 0;
        int r = s.size()-1;
        while(freq[s[r]] < 0){
            freq[s[r]]++;
            r--;
        }
        int best_length = r-l + 1;
        int best_l = l;
        
        while(r < s.size()){
            
            if(freq[s[l]] < 0){
                freq[s[l]]++;
                l++;
                if(r-l+1 < best_length){
                    best_length = r-l+1;
                    best_l = l;
                }
            } else {
            
                r++;
                freq[s[r]]--;
            }
        }
        return s.substr(best_l, best_length);
    }
};
