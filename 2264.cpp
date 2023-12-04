class Solution {
public:
    string largestGoodInteger(string num) {
        string ans = "";
        int i=0;
        int n = num.size();
        char digi = ' ';
        for(int i=0;i<=n-3;i++){
            if(num[i]==num[i+1] && num[i]==num[i+2]){
                digi = max(digi,num[i]);
            }
        }
        return (digi==' '?"":string(3,digi));
    }
};
