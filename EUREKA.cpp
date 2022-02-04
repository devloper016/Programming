#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        float x;
        x=pow(0.143*n,n);
        if(x-floor(x)<0.5){
            cout<<floor(x)<<endl;
        }else{
            cout<<floor(x)+1<<endl;
        }
    }
}