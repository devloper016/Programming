#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int count=0;
        for(int i=0;i<n;++i){
            cin>>v[i];
            if(v[i]>=10&&v[i]<=60){
                count++;
            }
        }
        cout<<count<<endl;

    }
}
