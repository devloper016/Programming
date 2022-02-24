//binary search sol

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        int s=0,e=nums.size()-1,mid;
        while(s<=e){
            mid = s+(e-s)/2;
            if(nums[mid]==target){
                v.push_back(mid);
                int temp =mid;
                while(temp > 0){
                    temp--;
                    if(nums[temp] == target)
                        v.push_back(temp);
                    else
                        break;
                }
                while(mid < nums.size()-1){
                    mid++;
                    if(nums[mid] == target)
                        v.push_back(mid);
                    else
                        break;
                }
                break;
            }
            else if(nums[mid] > target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};

//linear search

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==target){
                v.push_back(i);
            }
        }
        return v;
    }
};
