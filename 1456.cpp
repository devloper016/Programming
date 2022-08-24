class Solution {
public:
    bool vow(char c){
        if(c=='a' || c=='e' || c== 'i' || c=='o' || c=='u') return true;
        return false;
    }
    int sol(string s, int k){
        int i=0,j=0,count=0,ans=INT_MIN;
        while(j<s.size()){
            if(vow(s[j])) count++;
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
               ans = max(ans,count);
                if(vow(s[i])){
                    count--;
                }
                i++;
                j++;
            }
        }
        return ans;
    }
    int maxVowels(string s, int k) {
        return sol(s,k);
    }
};
