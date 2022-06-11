class Solution {
public:
    int findComplement(int num) {
        int n = log2(num) +1;
        int x = pow(2,n) -1;
        return x^num;
    }
};
