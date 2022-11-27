#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll sum;
int main()
{
	ll n;
	cin >> n;
	ll a[n], b[n], dp[n];
	for (ll i = 1; i<=n ; i++)
	{
		cin >> a[i];
		dp[i] = 0;
	}
	for (ll i = 1; i<=n; i++)
		cin >> b[i];
	dp[1] = b[1];
	for (ll i=1; i<=n; i++)
	{
		for (ll j=1; j<=i; j++)
		{
			if (a[i] > a[j])
				dp[i] = max(dp[i], dp[j] + b[i]);
			if (sum < dp[i])
				sum = dp[i];
		}
	}
	cout << sum;
	return 0;
}
				