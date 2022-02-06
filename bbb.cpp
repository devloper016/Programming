#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        n==s.length();
        for(int i=0; i<n;++i){
            cin>>s[i];
        }
        if(n>k){
            while(k>0){
                for(int i=0;i<n/2;++i){
                    for(int j=n-1;j>=n/2;--j){
                    if(s[i] != s[j]){
                        if(s[i] = '1')
                        {
                        s[i] = '0';
                        }
                        else s[i] = '1';
                    }
                    }
                }
            k--; 
            }
        }   
                string st;
                for(int i=st.length()-1;i>=0;--i){
                    st.push_back(s[i]);
            }
                if(s == st) cout<<"YES"<<endl;
                else cout << "NO"<<endl;
}
}