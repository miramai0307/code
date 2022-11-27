#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[100005];
ll b[100005];
ll F[100005];
int main()
{
	ll n;
	cin >> n;
	for(ll i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for(ll i = 1;i <= n;i++)
	{
		cin >> b[i];
	}
	for(ll i = 1;i <= n;i++)
	{
		F[i] = b[i];
		for(ll j = 1;j < i;j++)
		{
			if(a[i] > a[j])
			{
				F[i] = max(F[i],F[j] + b[i]);
			}
		}
	}
	ll res = 0;
	for(ll i = 1;i <= n;i++)
	{
		res = max(res,F[i]);
	}
	cout << res;
}
