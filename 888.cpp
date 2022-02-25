class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int n =aliceSizes.size();
        int m =bobSizes.size();
        sort(aliceSizes.begin(),aliceSizes.end());
        sort(bobSizes.begin(),bobSizes.end());
        
        int suma = accumulate(aliceSizes.begin(),aliceSizes.end(),0);
        int sumb = accumulate(bobSizes.begin(),bobSizes.end(),0);
        vector<int> a;
        for(int i=0;i<n;++i){
            int y = ((sumb+suma)/2)-suma + aliceSizes[i];
            int s=0,e=m-1,mid;
            while(s<=e){
                mid = s + (e-s)/2;
                if(bobSizes[mid]==y){
                    a = {aliceSizes[i],bobSizes[mid]};
                    return a;
                }
                else if(bobSizes[mid]>y) e = mid-1;
                else s = mid+1;
            }
        }
        return a;
    }
};
