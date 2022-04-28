#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool sol(string s){
    ll n = s.size();
    ll count_a = 0;
    bool ans=true;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            count_a++;
        else
            count_a--;
        if (count_a < 0)
        {
            ans = false;
            return ans;
        }
    }
    if (s[n - 1] != 'B')
    {
        return false;
    }
    return ans;
}
int main(){
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt",   "w", stdout);
#endif
 int t;
 cin>>t;
 while(t--){
     int l;
     cin>>l;
     vector<int> a(l);
     vector<int> b(l);
     for(int i=0;i<l;i++){
         cin>>a[i];
     }
     for(int i=0;i<l;i++){
         cin>>b[i];
     }
     for(int i=0;i<l;i++){
         int x = max(a[i],b[i]);
         int y = min(a[i],b[i]);

         a[i] = x , b[i]=y;
     }
     cout<<(*max_element(a.begin(),a.end())*(*max_element(b.begin(),b.end())))<<endl;
}
}
