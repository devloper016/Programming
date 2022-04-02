class Solution {
public:
    bool validPalindrome(string s) {
        int st =0 , e=s.size()-1, count=0,cnt=0;
        while(st<e){
            if(s[st]==s[e]){
                st++;
                e--;
            }
            else{
                count++;
                st++;
            }
            if(count>1) break;
        }
            int sa=0,en=s.size()-1;
            while(sa<e){
                if(s[sa]==s[en]){
                sa++;
                en--;
            }
            else{
                cnt++;
                en--;
            }
            if(cnt>1) break;
            
            }
            if(cnt==1 || count ==1) return true;
            if(cnt ==0 || count==0) return true;
        return false;
    }
};
