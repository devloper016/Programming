class Solution {
public:
    int score(string &s1,string &s2){
        int z = count(s1.begin(),s1.end(),'0');
        int o = count(s2.begin(),s2.end(),'1');
        
        return z+o;
    }
    int maxScore(string s) {
        int maxi = INT_MIN;
        int n = s.size();
        for(int i=0;i<n-1;i++){
           string s1= s.substr(0,i+1);
            string s2 = s.substr(i+1);
            maxi = max(maxi,score(s1,s2));
        }
        return maxi;
    }
};
