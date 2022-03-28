#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
    cin >> n;
    string s;
    cin >> s;
    int count1 = 0, count0 = 0, c1o = 0, c0o = 0, ct1 = 0, ct0 = 0;
    for(int i = 0;i < s.length();i++){
        if(s[i] == '1' && (i % 2 == 0) ){
            count1++;
            ct1++;
        }
        else if (s[i] == '0' &&  (i % 2 == 1)){
            count0++;
            ct0++;
        }
        
        if(s[i] == '1' && (i % 2 == 1 )){
            c1o++;
            ct1++;
        }
        else if (s[i] == '0' &&  (i % 2 == 0)){
            c0o++;
            ct0++;
        }
    }
    int res = 0;
    
    int len = s.length();
    if(len & 1)len--;
    bool st1 = true, st2 = true;
    for(int i = 0;i <= len-2;i+=2){
        if(s[i] == '0' && s[i+1] == '1'){
            
        }
        else{
            st1 = false;
        }
        
        if(s[i] == '1' && s[i+1] == '0'){
            
        }
        else{
            st2 = false;
        }
    }
        
    if(st1){
        cout << len/2 << endl;
        continue;
    }
    else if (st2){
        if(s[len] == '1'){
            cout << (len/2) << endl;
            continue;
        }
    }

    if(ct1== ct0){
        res = ct1 - 1;
    }
    else if(ct1 < ct0){
        res = ct1;
        
    }
    else if(ct1 > ct0){
        res = ct0;
        
    }
    
    cout << res << endl;
    }
}
