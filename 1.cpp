#include<bits/stdc++.h>
using namespace std;
int small(int a,int b,int c){
   int temp = min(a,b);
   int z = min(temp,c);
   return z;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int k = small(a,b,c);
        cout<<(a+b+c)-k<<endl;
    }
}