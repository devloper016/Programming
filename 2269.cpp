class Solution {
public:
    int slide(string s,int k,int num){
        int i=0,j=0,count=0;
        while(j<s.size()){
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                int a = stoi(s.substr(i,k));
                if(a!=0 && num%a==0){
                    count++;
                }
                i++;
                j++;
            }
        }
        return count;
    }
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
      return slide(s,k,num);  
    }
};
