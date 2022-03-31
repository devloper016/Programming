class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        vector<int> ans, hash(26, -1);
        for(int i=0; i<n; i++){
            hash[s[i]-'a'] = i;
        }
        for(int i=0, eOi = -1, peOi = -1; i<n; i++){
            eOi = max( eOi, hash[s[i]-'a'] );
            
            if(i == eOi){ 
                ans.push_back( eOi - peOi );
                peOi = eOi;
            }
        }
        return ans;
    }
};
