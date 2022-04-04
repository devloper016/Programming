class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        int sum=0;
        sort(cost.begin(),cost.end());
        int count=2;
        for(int i = n-1;i>=0;i--){
            sum += cost[i];
            count--;
            if(count==0){
            i--;
            count=2;
        }
        }
        
        return sum;
    }
};
