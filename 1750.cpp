class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        int i=0,j=n-1;
        int id=i,ind=j;
        while(i<j){
            while(i<j && s[i]==s[i+1] && s[i]==s[j]){
                i++;
            }
             while(j>i && s[j]==s[j-1] && s[i]==s[j]){
                j--;
            }
            if(s[i]==s[j]){
                // cout<<i<<" "<<j<<'\n';
                i++;
                j--;
            }
            else break;
        }
        return ((j-i+1)<=0?0:(j-i+1));
    }
};
