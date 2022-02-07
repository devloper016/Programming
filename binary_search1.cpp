#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int> &a,int x){
    int l=0,h=a.size()-1;
    int mid;
    while(h-l>1){
        mid = (l+h)/2;
        if(a[mid]<x){
            l = mid+1;
        }
        else{
            h = mid;
        }
    }
    if(a[l]>=x){
        return l;
    }
    else if(a[h]>= x){
        return h;
    }
    return -1;
}

int upper_bound(vector<int> &a,int x){
    int l=0, h= a.size()-1;
    int mid;
    while(h-x>1){
        mid = (l+h)/2;
        if(a[mid]<=x){
            l =mid+1;
        }
        else{
            h = mid;
        }
    }
    if(a[l]>x) return l;
    if(a[h]>x) return h;
    else return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int x;
    cin >>x;
    int l = lower_bound(a,x);
    cout<<l<<" "<<(l != -1? a[l]:-1)<<endl;
    int h = upper_bound(a,x);
    cout<<h<<" "<<(h!= -1? a[h]: -1)<<endl;
}