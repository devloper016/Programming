class Solution {
public:
    long long smallestNumber(long long num) {
        string s = to_string(num);
        if(s[0]=='-'){
            sort(s.begin()+1,s.end());
            reverse(s.begin()+1,s.end());
        }
        else{
            sort(s.begin(),s.end());
            int i=0;
            while(s[0]=='0'&&i<s.size()){
                if(s[i]!='0') swap(s[i],s[0]);
                i++;
            }
        }
        long long ans = stol(s);
        return ans;
    }
};
