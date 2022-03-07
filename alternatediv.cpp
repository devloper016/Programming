#include<bits/stdc++.h>
using namespace std;

void solution() {
int n;
cin>>n;
int v[n];
int res = 1;
if(n == 1) {
    cout<<"1"<<endl;return;
    }
for(int i =0 ; i<n-1 ; i+=2) {
    v[i] = res;
    v[i+1] = 2*res;
    res += 2;
    }
if(n%2 != 0) {
    v[n-1] = v[n-2] + 1;
    }
for(int i =0 ; i < n ; ++i) {
cout<<v[i]<<" ";
}


cout<<endl;
}

int main() {

long long t;
cin>>t;
while(t--){
    solution();
}
}
