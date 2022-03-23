#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        vector<int> res(n);
        map<ll,ll> mp;
        for(int i=0;i<n;i++)
        {cin>>res[i];
             mp[(int)log2(res[i])+1]++;}
        ll z=0;
       for(auto it=mp.begin();it!=mp.end();it++)
       {
           z+=(it->second)*(it->second-1)/2;
       }
   cout<<z<<endl;
    }
}
