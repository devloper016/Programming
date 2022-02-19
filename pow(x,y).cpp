#include<bits/stdc++.h>
using namespace std;

int main(){
    double x;
    cin>>x;
    int n;
    cin>>n;
    if(n==0){
        return 1;
    }
    else if(n>0){
        if(n%2==0){
            long double y = pow(x,n/2);
            return y*y;
        }
        else{
            return pow(x,n-1);
        }
    }
    else{
        if(n%2==0){
            n = abs(n);
            long double y = pow(x,n/2);
            return ((1/y)*(1/y));
        }
        else{
            return pow(x,n+1)/x;
        }
        return -1;
    }
}
