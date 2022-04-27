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
    freopen("output.txt", "w", stdout);
#endif
 int t;
 cin>>t;
 while(t--){
     string s;
     cin>>s;
     if(sol(s)){
         cout<<"yes"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }
}
}
