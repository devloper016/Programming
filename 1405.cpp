class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>> pq;
        if(a) pq.push({a,'a'});
        if(b) pq.push({b,'b'});
        if(c) pq.push({c,'c'});
        string ans="";
        while(pq.size()>1){
            pair<char,int> fi = pq.top();
            pq.pop();
            pair<char,int> se = pq.top();
            pq.pop();
            if(fi.first>=2){
                ans+=fi.second;
                ans+=fi.second;
                fi.first -= 2;
            }
            else{
                ans+=fi.second;
                fi.first-=1;
            }
            if(se.first>=2 && se.first>fi.first){
                ans+=se.second;
                ans+=se.second;
                se.first -= 2;
            }
            else{
                ans+=se.second;
                se.first -=1;
            }
            if(fi.first>0) pq.push(fi);
            if(se.first>0) pq.push(se);
        }
        if(pq.empty()) return ans;
        if(pq.top().first>=2){
            ans+=pq.top().second;
            ans+=pq.top().second;
        }
        else{
           ans+=pq.top().second;
        }
        return ans;
    }
};
