#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return n=1;
    }
    else{
        return fact(n-1)*n;
    }
}
int nCr(int n , int r){
    if(n<r){
        cout<< "Error";
    }
    int num ,den;
    num = fact(n);
    den = fact(r)*fact(n-r);
    return num/den ;
    
}

int main(){
    int p = nCr(4,2);
    cout<<p;
}