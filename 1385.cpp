class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int count=0;
        for(int i=0;i<arr1.size();i++){
            int s=0,e=arr2.size()-1;
        while(s<=e)
        {
             int mid=s+(e-s)/2;
            int diff=abs(arr1[i]-arr2[mid]);
            if(diff<=d)
            {
                count++;
                break;
            }
            else if(arr1[i]<arr2[mid])
            {
                
                e=mid-1;
            }
            else
            {
               
                s=mid+1;
            }
        }
    }
    
    return arr1.size()-count;
}

};
