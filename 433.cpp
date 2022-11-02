class Solution {
public:
    bool isvalid(string &s,string &t){
        int m=s.size();
        int count=0;
        for(int i=0;i<m;i++){
            if(s[i]!=t[i]) count++;
        }
        if(count==1) return true;
        return false;
    }
    int minMutation(string start, string end, vector<string>& bank) {
        bank.push_back(start);
        queue<string> q;
        int n = bank.size();
        vector<bool> v(n,false);
        v[n-1]= true;
        q.push(start);
        int count=0;
        while(!q.empty()){
            int size = q.size();
            while(size--){
                string t = q.front();
                q.pop();
                if(t==end) return count;
                for(int i=0;i<n;i++){
                    bool val = isvalid(t,bank[i]);
                    if(!val || v[i]) continue;
                    v[i] = true;
                    q.push(bank[i]);
                }
            }
            count++;
        }
        return -1;
    }
};
