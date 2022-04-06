class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int n = arr.size();
        vector<int> flips;
        vector<int> temp = arr;
        sort(temp.begin(),temp.end());
        while(arr!=temp && n){
            int m = *max_element(arr.begin(),arr.begin()+n);
            int k =find(arr.begin(),arr.end(),m)- arr.begin();
            
            reverse(arr.begin() , arr.begin() + k+1);          
            reverse(arr.begin() ,arr.begin() + n);
        
            flips.push_back(k+1);
            flips.push_back(n);
            n--;
        }
        return flips;
    }
};
