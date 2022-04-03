class Solution {
public:
    string maximumTime(string time) {
        int n = time.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(time[i]==':')
                ans+=':';
            else if(i==0 && time[i]=='?'){
                if((time[1]>='0' && time[1]<='3') || time[1]=='?')
                    ans+='2';
                else if(time[1]>'3')
                    ans+='1';
            }
            else if(i==1 && time[1]=='?'){
                if(time[0]=='0' || time[0]=='1')
                    ans+='9';
                else if(ans[0]=='2')
                    ans+='3';
            }
            else if(i==3 && time[3]=='?'){
                    ans+='5';
            }
            else if(i==4 && time[4]=='?'){
                ans+='9';
            }
            else{
                ans+=time[i];
            }
        }
        return ans;
    }
};
