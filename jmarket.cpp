#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      int x,a,b,c;
      cin>>x>>a>>b>>c;
      if(a<=b && a<=c){
         if(b<=c){ 
          cout<<((x-1)*a+b)<<endl;}
          else{
              cout<<((x-1)*a+c)<<endl;
          }
      } 
          else if(b<=a && b<=c){
              if(a<=c){
                  cout<<((x-1)*b+a)<<endl;
              }
              else{
                  cout<<((x-1)*b+c)<<endl;
              }
          }
          else if(c<=a && c<=b){
              if(b<=a){
                  cout<<((x-1)*c+b)<<endl;
              }
              else{
                  cout<<((x-1)*c+a)<<endl;
              }
          }
    }
}
