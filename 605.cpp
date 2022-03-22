class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
      int len = flowerbed.size();
      int prev = -2;
      for(int i=0;i<len;i++){
          if(flowerbed[i]==1){
              prev = i;
          }
          else if(prev != i-1 && (i==len-1 || flowerbed[i+1]==0)){
              flowerbed[i]=1;
              prev = i;
              n--;
          }
      }
        return (n<=0);
    }
};
