class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int> m;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) m[5]++;
            if(bills[i]==10){
                if(m[5]==0) return false;
                else{
                    m[10]++;
                    m[5]--;
                }
            }
            if(bills[i]==20){
                if(((m[5]==0)||(m[5]<=2)) && (m[10]==0)) return false;
                else if((m[5]>0)&&(m[10]>0)){
                    m[5]--;
                    m[10]--;
                    m[20]++;
                }
                else if(m[5]>=3){
                    m[20]++;
                    m[5]-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};
