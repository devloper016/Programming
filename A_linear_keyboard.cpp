#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 int t;
 cin>>t;
 while(t--){
     string s;
     cin>>s;
     vector<int> v(26);
     ll n = s.size(),sum=0;
     for(ll i=0; i<n;i++){
         v[s[i]-'a'] =i;
     }
     string st;
     cin>>st;
     for(ll i=1;i<st.size();i++){
         sum = sum+abs(v[st[i]-'a'] - v[st[i-1]-'a']);
     } 
     cout<<sum<<endl;    
 }
}
