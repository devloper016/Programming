#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v,int target,int start,int end){
    while(start<end){
    int mid = (end+start)/2;
    if(v[mid]==target) return mid;
    else if(v[mid]<target){
        start = mid+1;
    }
    else {
        end = mid-1;
    }
    }
    return start;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    int target;
    cin>>target;
    int i = binarySearch(v,target,0,n);
    cout<<i;
}
    