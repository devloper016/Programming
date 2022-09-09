class Solution {
public:
    string getPermutation(int n, int k) {
        int fac=1;
        vector<int> v;
        for(int i=1;i<n;i++){
            fac *= i;
            v.push_back(i);
        }
        v.push_back(n);
        k = k-1;
        string ans ="";
        while(true){
            ans = ans + to_string(v[k/fac]);
            v.erase(v.begin()+k/fac);
            if(v.size()==0){
                break;
            }
            k %= fac;
            fac /= v.size();
        }
        return ans;
    }
};
