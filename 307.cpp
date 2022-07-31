class NumArray {
public:

    int* arr;

    int l, r, lastSum;
    
    NumArray(vector<int>& nums) {
        arr = &nums[0];                                 
        l=0; r=0;                       
        lastSum = arr[0];               
    }
    void update(int index, int val) {   
        if(index>=l && index<=r)                        
            lastSum -= arr[index];                      
        
        arr[index] = val;
        
        if(index>=l && index<=r)
            lastSum += arr[index];
    }

    int sumRange(int left, int right) {
        if(left < l)
            lastSum += accumulate(arr+left, arr+l, 0);
        else if(left > l)
            lastSum -= accumulate(arr+l, arr+left, 0);
        
        if(right > r)
            lastSum += accumulate(arr+r+1, arr+right+1, 0);
        else if(right < r)
            lastSum -= accumulate(arr+right+1, arr+r+1, 0);
        l = left;
        r = right;
        
        return lastSum;                      
    }
};
