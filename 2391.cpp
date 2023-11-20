class Solution {
public:
    int garbageCollection(vector<string>& gb, vector<int>& tv) {
        int n = gb.size();
        for(int i=1; i<n-1; i++)
            tv[i]+= tv[i-1];
        
        int m=0, p=0, g=0;
        int lastM=-1, lastP = -1, lastG=-1;
        for(auto i=0; i<n; i++){
            for(int j=0; j<gb[i].size(); j++){
                char c = gb[i][j];
                if(c=='M') {
                    m++;
                    lastM = i;
                }
                else if(c=='P'){ 
                    p++;
                    lastP = i;
                }
                else{
                    g++;
                    lastG = i;
                }
            }
        }
        int ans = 0;
        if(lastM!=-1){
            ans += m+ ((lastM>0)?tv[lastM-1]:0);
        }
        if(lastP!=-1){
            ans += p+((lastP>0)?tv[lastP-1]:0);
        }
        if(lastG!=-1){
            ans += g+((lastG>0)?tv[lastG-1]:0);
        }
        return ans;
    }
};
