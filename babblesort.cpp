#include <bits/stdc++.h>
using namespace std;
void bsor(int arr1[],int n)
{
    for(int i=0;i<n;i++)
    {   int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr1[j]>arrr[j+1])
            {swap(arr1[j],arr1[j+1]);
             flag=1;
            }
        }
        if(flag==0)
        {break;}
    }
    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++)
    {
     cout<<arr1[i]<<" ";   
    }
}
int main()
{   int n;
    cout<<"enter array size";
    cin>>n;
    cout<<"\n enter array";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bsor(arr,n);
    return 0;
}