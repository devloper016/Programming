class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int ans=0;
        while(pq.size()>1){
            int fi = pq.top();
            pq.pop();
            int se = pq.top();
            pq.pop();
            ans++;
            fi -= 1;
            se -= 1;
            if(fi>0)pq.push(fi);
            if(se>0)pq.push(se);
        }
        return ans;
    }
};
