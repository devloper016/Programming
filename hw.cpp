#include<bits/stdc++.h>
using namespace std;

void res(vector<int> &nums,vector<vector<int>> &out,int i){
    if(i=nums.size()){
        out.push_back(nums);
        return ;
    }
    for(int j=i;i<nums.size();++j){
        swap(nums[i],nums[j]);
        res(nums,out,i+1);
        swap(nums[i],nums[j]);
    }
}

vector<vector<int>> op(vector<int> &nums,vector<vector<int>> &out,int i){
    res(nums,out,i);
    return out;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin>>nums[i];
    }
    int i=0;
    vector<vector<int>> out;
    op(nums,out,i);
}
                                                                           