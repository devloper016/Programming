#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n];
    double a[n];
    for(int i = 0; i < n; ++i) cin >> x[i];
    double sum = 0;
    for(int i = 0; i < n; ++i) sum+=x[i],a[i] = sum/(i+1);
    for(int i = 0; i < n; ++i) cout<<a[i]<<" "; cout<<endl;
    return 0;
}