#include<bits/stdc++.h>
using namespace std;

int main(){
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int d = __gcd(x,y);
    x/=d;
    y/=d;
    int e = a/x;
    int f = b/y;
    if(a>x && b>y){
        cout<<x*min(e,f)<<" "<<y*min(e,f)<<endl;
    }
    else{
        cout<<0<<" "<<0;
    }
}
