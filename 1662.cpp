class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string tmp1 = "",tmp2="";
        for(int i=0;i<word1.size();i++){
            tmp1+=word1[i];
        }
        for(int i=0;i<word2.size();i++){
            tmp2+=word2[i];
        }
        if(tmp1==tmp2) return true;
        return false;
    }
};
