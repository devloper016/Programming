class Solution {
public:
    int appendCharacters(string s, string t) {
        int m = s.size();
        int n = t.size();
        int j=0;
        int cnt=0;
        for(int i=0;i<m;i++){
            while(i<m && j<n && s[i]==t[j]){
                cnt++;
                i++,j++;
            }
        }
        return n-cnt;
    }
};
