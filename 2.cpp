#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int z = 21 - (a+b);
        if(z>10){
            cout<< -1<<endl;
        }
        else{
            cout<<z<<endl;
        }
    }
}