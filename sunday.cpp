#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int x=n;
	    for(int i=0;i<n;i++)
	    {
	        int j;
	        cin>>j;
	        if((j+1)%7==0 || j%7==0)
	        x--;
	    }
        int ans=x+8;
        cout<<ans<<endl;
	}
	return 0;
}
