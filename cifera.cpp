    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int main(){
    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
     int k,l,importance= -1;
     cin>>k;
     cout<<'\n';
     cin>>l;
     while(l%k==0){
         l/=k;
         importance+=1;
     }
     if(importance>=0 && l==1){
         cout<<"YES"<<"\n"<<importance<<endl;
     }
     else{
         cout<<"NO";
     }
     return 0;
    }
