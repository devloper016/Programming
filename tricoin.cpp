#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll mid, ll n){
    return ((mid*(mid+1)/2) <=n); 
}
void solve(){
    ll n;
    cin>>n;
    ll res= -1;
    ll start=0;
    ll end = 1e5;
    while(start<=end){
        ll mid = (end+start)/2;
        if(check(mid,n)){
            res = max(res,mid);
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    cout<<res<<endl;
}

int main(){
    ll t;
    cin>>t; 
    while(t--){
        solve();
    }
}
