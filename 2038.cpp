class Solution {
public:
    bool winnerOfGame(string colors) {
        int n = colors.size();
        int alic=0;
        int bob=0;
        for(int i=1;i<n-1;i++){
            if(colors[i-1]==colors[i] && colors[i]==colors[i+1]){
                if(colors[i]=='A'){
                    alic++;
                }
                else{
                    bob++;
                }
            }
        }
        cout<<alic<<" "<<bob;
        if(alic-bob>=1) return true;
        return false;
    }
};
