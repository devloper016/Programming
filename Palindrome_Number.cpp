class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.size()-1;
        bool value;
        for(int i = 0;i<s.size()-1;++i){
            if(s[i]==s[n]){
                value = true;
                n--;
            }
            else{
                value = false;
                break;
            }
        }
        return value;
    }
};
