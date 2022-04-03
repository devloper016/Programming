class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        int cnt =0;
        int n= s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='6'){
                s[i]= '9';
                cnt++;
            }
             if(cnt==1){
          ans = stoi(s);
        }
        }
        ans = max(num,ans);
        return ans;
    }
};
