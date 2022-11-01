class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int>pq;
        for(int i=0;i<3;i++){
            if(amount[i]>0) pq.push(amount[i]);
        }
        int ans=0;
        while(pq.size()>1){
            int fi = pq.top();
            pq.pop();
            int se = pq.top();
            pq.pop();
            fi -= 1;
            se -= 1;
            ans++;
            if(fi>0) pq.push(fi);
            if(se>0) pq.push(se);
        }
        if(pq.size()==1){
            ans += pq.top();
        }        
        return ans;
    }
};
