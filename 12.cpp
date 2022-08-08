class Solution {
public:
    string intToRoman(int num) {
        vector<string> rome = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        vector<int> numb = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        
        string res  = "";
        int i=0;
       while(i<numb.size()){
            if(num >= numb.at(i)){
                num -= numb.at(i);
                res += rome.at(i);
            }
           else i++;
        }
        return res;
    }
};
