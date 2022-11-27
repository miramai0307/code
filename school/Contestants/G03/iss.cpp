#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
 
int main()
{
	ll n;
	cin>>n;
	ll A[n], B[n];
	ll D[n];
	for(ll i = 0; i < n; i++)	cin>>A[i];
	for(ll i = 0; i < n; i++)
	{
		cin>>B[i];
		D[i] = B[i];
	}
	D[0] = B[0];
	for(ll i = 1; i < n; i++)
	{
		for(ll j = i - 1; j >= 0; j--)
		{
			if(A[i] > A[j])	D[i] = max(D[i], D[j] + B[i]);
		}
	}
	cout<<*max_element(D, D + n);
}