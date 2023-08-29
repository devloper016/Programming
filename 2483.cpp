class Solution {
public:
    int bestClosingTime(string customers) {
        int cur = count(customers.begin(),customers.end(),'Y');
        int mincur = cur;
        int ans=0;
        for(int i=0;i<customers.size();i++){
            char ch = customers[i];
            
            if(ch=='Y'){
                cur--;
            }
            else{
                cur++;
            }
            
            if(cur<mincur){
                mincur = cur;
                ans = i+1;
            }
        }
        return ans;
    }
};
