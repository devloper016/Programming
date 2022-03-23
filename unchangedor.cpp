#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int z=0;
        for(int i=n;i>=4;i=i/2)
        {
            z++;
        }
        cout<<n-z-2<<endl;

    }
}
