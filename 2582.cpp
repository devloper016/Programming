class Solution {
public:
    int passThePillow(int n, int time) {
        int t = n-1;
        int r = time/t;
        if(r%2==0){
            return (time%(t) +1);
        }
        return (n-(time%t));
    }
};
