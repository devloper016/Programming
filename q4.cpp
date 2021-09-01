#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int r;
        cin>>r;
        int diff=0;
        map< int ,int> j;
        for(int i=0;i<r;i++){
             int x;
            cin>>x;
            j[x]++;
            diff=max(diff,j[x]);
        }
        int a=0;
        if(r>2){
            if(diff==1){
                a=r-2;
            }
            else{
                a=r-diff;
            };

        }
        cout<<a<<endl;
    }
    return 0;
}