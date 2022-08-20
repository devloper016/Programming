class Solution {
public:
    unordered_map<string,bool> mp;
    bool solve(string s1,string s2){
        if(s1.compare(s2)==0) return true;
        if(s1.length()<=1) return false;
        int n= s1.size();
        bool flag = false;
        
        string tmp = s1+" "+s2;
        if(mp.find(tmp)!= mp.end()){
            return mp[tmp];
        }
        for(int i=1;i<=n-1;i++){
            bool cond1 =false, cond2= false;
        cond1 = solve(s1.substr(0,i),s2.substr(0,i))==true && solve(s1.substr(i,n-i),s2.substr(i,n-i))==true;
        cond2 = solve(s1.substr(0,i),s2.substr(n-i,i))==true && solve(s1.substr(i,n-i),s2.substr(0,n-i))==true;

            if(cond1||cond2){
                flag = true;
                break;
            }
        }
        return mp[tmp] = flag;
    }
    bool isScramble(string s1, string s2){
        mp.clear();
        int n = s1.size();
        int m = s2.size();
        if(n<m || n>m) return false;
        return solve(s1,s2);
    }
};
