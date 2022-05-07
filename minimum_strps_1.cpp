#include<bits/stdc++.h>
using namespace std;

int mini(int n){
    if(n<=1){
        return 0;
    }
    int x  = mini(n-1);
    int y=INT_MAX,z=INT_MAX;
    if(n%2==0){
        y = mini(n/2);
    }
    if(n%3==0){
        z = mini(n/3);
    }
    int output = min(x,min(y,z));
    return output+1;
}
int main(){
        int n;
        cin>>n;
        cout<<mini(10)<<endl;
}
