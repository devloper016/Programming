class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int total = 0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(!grumpy[i]){
                total+=customers[i];
            }
        }
        int wall=0,wap=0;
        for(int i=0;i<n;i++){
            wall+=customers[i];
            if(!grumpy[i]) wap+=customers[i];
            if(i+1>=minutes){
                ans = max(ans,total-wap+wall);
                int l = i-minutes+1;
                wall-=customers[l];
                wap-=((1-grumpy[l])*customers[l]);
            }
        }
        return ans;
    }
};
