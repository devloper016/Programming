class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int a,b,c,d;
        int i;
        for(i=0;i<num1.size();i++){
            if(num1[i]=='+'){
                a = stoi(num1.substr(0,i));
                break;
            }
        }
        b = stoi(num1.substr(i+1,num1.length()-i-2));
        int j;
        for(j=0;j<num2.size();j++){
            if(num2[j]=='+'){
                c = stoi(num2.substr(0,j));
                break;
            }
        }
        d = stoi(num2.substr(j+1,num2.length()-j-2));
        string ans = "";
        // cout<<a<<endl;
        // cout<<b<<endl;
        // cout<<c<<endl;
        // cout<<d<<endl;
        ans += to_string(a*c - b*d);
        ans += '+';
        ans += to_string(a*d + b*c);
        ans += 'i';
        
        return ans;
    }
};
