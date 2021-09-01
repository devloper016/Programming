#include<iostream>
using namespace std;

int main(){
    int t,i,r;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>r;
        if(r>=2000){
        cout<<"1"<<endl;
    }
    else if(r<2000&&r>=1600){
        cout<<"2"<<endl;
    }
    else{
        cout<<"3"<<endl;
    }
    }
    
}