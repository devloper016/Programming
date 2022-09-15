class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int i=0;
        long long int res=0;
        int negcnt=0;
        int poscnt=0;
        
        while(s[i]==' ')
            i++;
        
        if(s[i]=='+')
        {
            poscnt=1;
            i++;
        }
        
        if(s[i]=='-')
        {
            negcnt=1;
            i++;
        }
        if(poscnt==1 && negcnt==1)
            return 0;
        
        while(s[i]>='0' && s[i]<='9')
        {
            long long int temp = s[i] - '0';

            res = res*10 + temp;
            if(res>INT_MAX)
                break;
            i++;
            
        }
        if(negcnt==1)
        {
            res=-res;
            if(res<INT_MIN)
                return INT_MIN;
            return res;
        }
        if(res>INT_MAX)
            return INT_MAX;
        return res;
        
    }
};
