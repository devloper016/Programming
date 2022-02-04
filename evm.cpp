#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,p,q,r;
        int m,M;
        cin>>a>>b>>c>>p>>q>>r;
        m = max({p,q,r},comp);
        M = max({a,b,c},comp);
        if(m>M){
            if((a+b+m)>=((p+q+r)/2)){
            cout<<"yes"<<endl;
        }
        else if((a+b+m)<((p+q+r)/2)){
            cout<<"NO"<<endl;
        }
        }
    }
}