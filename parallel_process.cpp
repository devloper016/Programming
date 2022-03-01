#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int> v(n);
        vector<long long int> a(n);
        for(int i=0;i<n;++i){
            cin>>v[i];
        }
        long long int sum =0;
        for(int i=0;i<n;++i){
            sum += v[i];
            a[i]=sum;
        }
        long long int ans = sum;
        for(int i=0;i<n;++i){
            ans = min(max(a[i],sum-a[i]),ans);
        }
        cout<<ans<<endl;
    }
  
    
}
