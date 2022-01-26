#include <bits/stdc++.h>
using namespace std;

void Prefix(int arr[], int n, int prefixavg[])
{
	prefixavg[0] = arr[0];

	for (int i = 1; i < n; i++)
		prefixavg[i] = (prefixavg[i - 1] + arr[i])/2;
}

int main()
{
	int arr[] = { 10, 4, 16, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int prefixavg[n];

	  Prefix(arr, n, prefixavg);
	for (int i = 0; i < n; i++)
		cout << prefixavg[i] << " ";
}
