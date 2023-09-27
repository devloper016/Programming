class Solution
{
public:
    string decodeAtIndex(string s, int k)
    {
        int n= s.size();
        long long sz=0;
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                sz*=s[i]-'0';
            }
            else{
                sz++;
            }
        }
        for(int i=n-1;i>=0;i--){
            k %=sz;
            if(k==0 && isalpha(s[i])){
                return string(1,s[i]);
            }
            if(isdigit(s[i])){
                sz /= s[i]-'0';
            }
            else{
                sz--;
            }
        }
        return "";
    }
};
