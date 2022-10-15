class Solution {
public:
   static bool cmp(string &a,string &b){
        string x = a+b;
        string y = b+a;
        if(x>y) return true;
        return false;
    }
    string largestNumber(vector<int>& nums) {
        string ans = "";
        vector<string> v;
        for(auto it: nums){
            string tmp = to_string(it);
            v.push_back(tmp);
        }
        sort(v.begin(),v.end(),cmp);
        for(auto it: v){
            ans += it;
            if(ans[0]=='0' && ans.size()>1) ans.erase(ans.begin());
        }
        return ans;
    }
};
