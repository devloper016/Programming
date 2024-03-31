class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans=numBottles;
        int empty=numBottles;
        numBottles=0;
        while(empty>=numExchange){
            numBottles++;
            empty-=numExchange;
            numExchange++;
            ans+=numBottles;
            empty+=numBottles;
            numBottles=0;
        }
        return ans;
    }
};
