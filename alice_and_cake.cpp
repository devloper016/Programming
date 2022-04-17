#include<bits/stdc++.h>
using namespace std;

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
     vector<int> v(n);
     for(int i=0;i,n;i++){
         cin>>v[i];
     }
     if(n==1){
         cout<<"YES"<<endl;
         continue;
     }
     int sum=0;
     map<int,int> m;
     for(int i=0;i<n;i++){
         sum+=v[i];
         m[v[i]]++;
     }
     priority_queue<int> p;
     p.push(sum);
     while(p.size()<n){
         int y = p.top();
         p.pop();
         int a = y/2, b=(y+1)/2;
         if(m.count(a)) m[a]--,n--;
         else p.push(a);
         if(m[a]==0) m.erase(a);
         if(m.count(a)) m[a]--,n--;
         else p.push(a);
         if(m[a]==0) m.erase(a);
         if (m.count(b))
             m[b]--, n--;
         else
             p.push(b);
         if (m[b] == 0)
             m.erase(b);
     }
     if(p.size()==0) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
 }
}
