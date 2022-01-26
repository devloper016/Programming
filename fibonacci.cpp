#include<iostream>
using namespace std;
// fibonacci series using loop
int fib(int n){
    int t0=0 , t1=1 , s,i;
    if(n<=1){
        return n;
    }
    else{
        for(i=2;i<=n;i++){
            s=t0+t1;
            t0=t1;
            t1= s;
        }
        return s;
    }
}
//fibonacci series using recursion
int F[10];
int mfib(int n){
    if(n<=1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2]== -1){
            F[n-2]=mfib(n-2);
        }
        if(F[n-1]== -1){
            F[n-1]=mfib(n-1);
        }
        return F[n-1]+F[n-2];
    }
}

int main(){
    int i;
    for(i=0;i<=10;i++){
        F[i]= -1;
    }
    int r = mfib(10);
    cout<<r;
}