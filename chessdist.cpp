#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int p = max(abs(x2-x1),abs(y2-y1));
        cout<<p<<endl;
    }
}
