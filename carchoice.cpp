#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      double x1,x2,y1,y2;
      cin>>x1>>x2>>y1>>y2;
      if((y1/x1)<(y2/x2)){
          cout<<-1<<endl;
      }
      else if((y1/x1)==(y2/x2)){
          cout<<0<<endl;
      }
      else if((y1/x1)>(y2/x2)){
          cout<<1<<endl;
      }
    }
}
