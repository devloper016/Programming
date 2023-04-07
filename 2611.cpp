class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        int ans=0;
        int m = reward1.size(), n=reward2.size();
        for(int i=0;i<n;i++){
            ans+= reward2[i];
        }
        
        priority_queue<int> pq;
        for(int i=0;i<m;i++){
            int tmp = reward1[i] - reward2[i];
            pq.push(tmp);
        }
        int i=0;
        while(i<k){
            int tp = pq.top();
            pq.pop();
            ans+=tp;
            i++;
        }
        return ans;
    }
};
