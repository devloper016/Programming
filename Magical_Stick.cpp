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
         int n;
         cin>>n;
         if(n%2==0){
             cout<<n/2<<endl;
         }
         else{
             cout<<(n+1)/2<<endl;
         }
     }
    }
