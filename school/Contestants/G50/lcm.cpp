#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,k;
ll f[10001];
int main()
{
	cin >> a >> b;
	ll m = 1;
	ll t = 1;
	ll l = 0;

	for(int i = a; i <= b; i++)
	{
		m*=i;
	}
	for(int i = 1; i <= m; i++)
	{
		if(m%i==0)
		{
			l++;
			f[l]=i;
		}
	}
	for(int i = 1; i <= l; i++)
	{
		for(int j = 1; j <= l; j++)
		{
			k=f[i]*f[j]/__gcd(f[i],f[j]);
			if(f[i] != f[j] && k == m)
			{
				t++;
			}
		}
	}
	cout << t;
}
