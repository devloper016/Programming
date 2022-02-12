#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    if(s1==" "){
        cout<< '0';
    }
    else{
        int found = s.find(s1);
        cout<<found;
    }
}