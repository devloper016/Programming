#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
     vector<pair<int,int>> time;
     vector<int> ar(n);
     for(int i=0;i<n;i++){
         cin>>ar[i];
         time.push_back({ar[i],1});
     }
     vector<int> de(n);
     for(int i=0;i<n;i++){
         cin>>de[i];
         time.push_back({de[i],0});
     }
     sort(time.begin(),time.end());

     int count=0,ans=0;
     for(auto i : time){
         if(i.second == 1) count++;
         else count--;

         ans = max(count,ans);
     }
     cout<<ans<<endl;
    }
}
