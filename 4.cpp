#include<bits/stdc++.h>
using namespace std;
int reduce(int b, int c)
{
    int d;
    d = __gcd(b, c);
 
    b = b / d;
    c = c / d;

    return c;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int b,c;
        cin>>b>>c;
        int a = reduce(b,c);
        cout<<a<<endl;
    }
}